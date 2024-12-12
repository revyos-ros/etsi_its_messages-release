/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
============================================================================= */

/** Auto-generated by https://github.com/ika-rwth-aachen/etsi_its_messages -----
python3 \
  utils/codegen/codegen-py/asn1ToConversionHeader.py \
  asn1/raw/cpm_ts103324/asn/CPM-PDU-Descriptions.asn \
  asn1/raw/cpm_ts103324/asn/CPM-OriginatingStationContainers.asn \
  asn1/raw/cpm_ts103324/asn/CPM-PerceivedObjectContainer.asn \
  asn1/raw/cpm_ts103324/asn/CPM-PerceptionRegionContainer.asn \
  asn1/raw/cpm_ts103324/asn/CPM-SensorInformationContainer.asn \
  asn1/patched/cpm_ts103324/asn/cdd/ETSI-ITS-CDD.asn \
  -t \
  cpm_ts \
  -o \
  etsi_its_conversion/etsi_its_cpm_ts_conversion/include/etsi_its_cpm_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DF represents a CPM container preceded by its type identifier and a lenght indicator.
 *
 * It shall include the following components: 
 *
 * @field containerId: the identifier of the container type.
 *
 * @field containerData: the container content consistent with the container type.
 *
*
WrappedCpmContainer ::= SEQUENCE {
   containerId     CPM-CONTAINER-ID-AND-TYPE.&id( {CpmContainers} ),
   containerData   CPM-CONTAINER-ID-AND-TYPE.&Type( {CpmContainers}{@containerId} )
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_WrappedCpmContainer.h>
#include <etsi_its_cpm_ts_conversion/convertCpmContainerId.h>
#include <etsi_its_cpm_ts_conversion/convertOriginatingRsuContainer.h>
#include <etsi_its_cpm_ts_conversion/convertOriginatingVehicleContainer.h>
#include <etsi_its_cpm_ts_conversion/convertPerceivedObjectContainer.h>
#include <etsi_its_cpm_ts_conversion/convertPerceptionRegionContainer.h>
#include <etsi_its_cpm_ts_conversion/convertSensorInformationContainer.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/WrappedCpmContainer.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/wrapped_cpm_container.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_WrappedCpmContainer(const cpm_ts_WrappedCpmContainer_t& in, cpm_ts_msgs::WrappedCpmContainer& out) {
  toRos_CpmContainerId(in.containerId, out.container_id);
  if (in.containerData.present == cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_OriginatingVehicleContainer) {
    toRos_OriginatingVehicleContainer(in.containerData.choice.OriginatingVehicleContainer, out.container_data_originating_vehicle_container);
    out.container_id.value = cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_ORIGINATING_VEHICLE_CONTAINER;
  }
  if (in.containerData.present == cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_OriginatingRsuContainer) {
    toRos_OriginatingRsuContainer(in.containerData.choice.OriginatingRsuContainer, out.container_data_originating_rsu_container);
    out.container_id.value = cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_ORIGINATING_RSU_CONTAINER;
  }
  if (in.containerData.present == cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_SensorInformationContainer) {
    toRos_SensorInformationContainer(in.containerData.choice.SensorInformationContainer, out.container_data_sensor_information_container);
    out.container_id.value = cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_SENSOR_INFORMATION_CONTAINER;
  }
  if (in.containerData.present == cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_PerceptionRegionContainer) {
    toRos_PerceptionRegionContainer(in.containerData.choice.PerceptionRegionContainer, out.container_data_perception_region_container);
    out.container_id.value = cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_PERCEPTION_REGION_CONTAINER;
  }
  if (in.containerData.present == cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_PerceivedObjectContainer) {
    toRos_PerceivedObjectContainer(in.containerData.choice.PerceivedObjectContainer, out.container_data_perceived_object_container);
    out.container_id.value = cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_PERCEIVED_OBJECT_CONTAINER;
  }
}

void toStruct_WrappedCpmContainer(const cpm_ts_msgs::WrappedCpmContainer& in, cpm_ts_WrappedCpmContainer_t& out) {
  memset(&out, 0, sizeof(cpm_ts_WrappedCpmContainer_t));
  toStruct_CpmContainerId(in.container_id, out.containerId);
  if (in.container_id.value == cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_ORIGINATING_VEHICLE_CONTAINER) {
    toStruct_OriginatingVehicleContainer(in.container_data_originating_vehicle_container, out.containerData.choice.OriginatingVehicleContainer);
    out.containerData.present = cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_OriginatingVehicleContainer;
  }
  if (in.container_id.value == cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_ORIGINATING_RSU_CONTAINER) {
    toStruct_OriginatingRsuContainer(in.container_data_originating_rsu_container, out.containerData.choice.OriginatingRsuContainer);
    out.containerData.present = cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_OriginatingRsuContainer;
  }
  if (in.container_id.value == cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_SENSOR_INFORMATION_CONTAINER) {
    toStruct_SensorInformationContainer(in.container_data_sensor_information_container, out.containerData.choice.SensorInformationContainer);
    out.containerData.present = cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_SensorInformationContainer;
  }
  if (in.container_id.value == cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_PERCEPTION_REGION_CONTAINER) {
    toStruct_PerceptionRegionContainer(in.container_data_perception_region_container, out.containerData.choice.PerceptionRegionContainer);
    out.containerData.present = cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_PerceptionRegionContainer;
  }
  if (in.container_id.value == cpm_ts_msgs::WrappedCpmContainer::CHOICE_CONTAINER_DATA_PERCEIVED_OBJECT_CONTAINER) {
    toStruct_PerceivedObjectContainer(in.container_data_perceived_object_container, out.containerData.choice.PerceivedObjectContainer);
    out.containerData.present = cpm_ts_WrappedCpmContainer__containerData_PR::cpm_ts_WrappedCpmContainer__containerData_PR_PerceivedObjectContainer;
  }
}

}
