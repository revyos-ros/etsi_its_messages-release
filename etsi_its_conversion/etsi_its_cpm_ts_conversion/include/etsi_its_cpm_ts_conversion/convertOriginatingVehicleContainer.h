/** ============================================================================
MIT License

Copyright (c) 2023-2025 Institute for Automotive Engineering (ika), RWTH Aachen University

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
 * This DF  represents the Originating Vehicle Container
 *
 * It shall include the following components: 
 *
 * @field orientationAngle: the angle and angle accuracy of the absolute orientation of the disseminating vehicle in the WGS84 coordinate system with respect to true North.
 *
 * @field pitchAngle: the optional angle and angle accuracy between the ground plane and the current orientation of the vehicle's x-axis with respect to the ground plane about the y-axis according to the ISO 8855.
 *
 * @field rollAngle: the optional angle and angle accuracy between the ground plane and the current orientation of a vehicle's y-axis with respect to the ground plane about the x-axis according to the ISO 8855
 *
 * @field trailerData: information about the trailer dimensions and orientation in case a trailer is present.
 * 
*
OriginatingVehicleContainer ::= SEQUENCE {
    orientationAngle   Wgs84Angle,
    pitchAngle         CartesianAngle OPTIONAL,
    rollAngle          CartesianAngle OPTIONAL,
    trailerDataSet     TrailerDataSet OPTIONAL,
    ...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_OriginatingVehicleContainer.h>
#include <etsi_its_cpm_ts_conversion/convertCartesianAngle.h>
#include <etsi_its_cpm_ts_conversion/convertTrailerDataSet.h>
#include <etsi_its_cpm_ts_conversion/convertWgs84Angle.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/OriginatingVehicleContainer.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/originating_vehicle_container.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_OriginatingVehicleContainer(const cpm_ts_OriginatingVehicleContainer_t& in, cpm_ts_msgs::OriginatingVehicleContainer& out) {
  toRos_Wgs84Angle(in.orientationAngle, out.orientation_angle);
  if (in.pitchAngle) {
    toRos_CartesianAngle(*in.pitchAngle, out.pitch_angle);
    out.pitch_angle_is_present = true;
  }
  if (in.rollAngle) {
    toRos_CartesianAngle(*in.rollAngle, out.roll_angle);
    out.roll_angle_is_present = true;
  }
  if (in.trailerDataSet) {
    toRos_TrailerDataSet(*in.trailerDataSet, out.trailer_data_set);
    out.trailer_data_set_is_present = true;
  }
}

void toStruct_OriginatingVehicleContainer(const cpm_ts_msgs::OriginatingVehicleContainer& in, cpm_ts_OriginatingVehicleContainer_t& out) {
  memset(&out, 0, sizeof(cpm_ts_OriginatingVehicleContainer_t));
  toStruct_Wgs84Angle(in.orientation_angle, out.orientationAngle);
  if (in.pitch_angle_is_present) {
    out.pitchAngle = (cpm_ts_CartesianAngle_t*) calloc(1, sizeof(cpm_ts_CartesianAngle_t));
    toStruct_CartesianAngle(in.pitch_angle, *out.pitchAngle);
  }
  if (in.roll_angle_is_present) {
    out.rollAngle = (cpm_ts_CartesianAngle_t*) calloc(1, sizeof(cpm_ts_CartesianAngle_t));
    toStruct_CartesianAngle(in.roll_angle, *out.rollAngle);
  }
  if (in.trailer_data_set_is_present) {
    out.trailerDataSet = (cpm_ts_TrailerDataSet_t*) calloc(1, sizeof(cpm_ts_TrailerDataSet_t));
    toStruct_TrailerDataSet(in.trailer_data_set, *out.trailerDataSet);
  }
}

}
