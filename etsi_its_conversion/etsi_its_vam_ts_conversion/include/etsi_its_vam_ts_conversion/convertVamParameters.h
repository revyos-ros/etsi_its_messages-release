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
  asn1/raw/vam-ts103300_3/VAM-PDU-Descriptions.asn \
  asn1/patched/vam-ts103300_3/cdd/ETSI-ITS-CDD.asn \
  -t \
  vam_ts \
  -o \
  etsi_its_conversion/etsi_its_vam_ts_conversion/include/etsi_its_vam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * @details VamParameters
 * The VAM payload includes the @ref BasicContainer and @ref VruHighFrequencyContainer. 
 * The VAM payload may also include additional containers: @ref VruLowFrequencyContainer,
 * @ref VruClusterInformationContainer, @ref VruClusterOperationContainer and @ref VruMotionPredictionContainer.
 * The selection of the additional containers depends on the dissemination criteria, 
 * e.g. _vruCluster_ or _MotionDynamicPrediction_ availability.
 * 
 * @category: Communication information
 * @revision: V2.2.1
**
    VamParameters ::= SEQUENCE {
        basicContainer                 BasicContainer,
        vruHighFrequencyContainer      VruHighFrequencyContainer, 
        vruLowFrequencyContainer       VruLowFrequencyContainer OPTIONAL,
        vruClusterInformationContainer VruClusterInformationContainer OPTIONAL,
        vruClusterOperationContainer   VruClusterOperationContainer OPTIONAL,
        vruMotionPredictionContainer   VruMotionPredictionContainer OPTIONAL,
        ...
    }
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_VamParameters.h>
#include <etsi_its_vam_ts_conversion/convertBasicContainer.h>
#include <etsi_its_vam_ts_conversion/convertVruClusterInformationContainer.h>
#include <etsi_its_vam_ts_conversion/convertVruClusterOperationContainer.h>
#include <etsi_its_vam_ts_conversion/convertVruHighFrequencyContainer.h>
#include <etsi_its_vam_ts_conversion/convertVruLowFrequencyContainer.h>
#include <etsi_its_vam_ts_conversion/convertVruMotionPredictionContainer.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/VamParameters.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/vam_parameters.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_VamParameters(const vam_ts_VamParameters_t& in, vam_ts_msgs::VamParameters& out) {
  toRos_BasicContainer(in.basicContainer, out.basic_container);
  toRos_VruHighFrequencyContainer(in.vruHighFrequencyContainer, out.vru_high_frequency_container);
  if (in.vruLowFrequencyContainer) {
    toRos_VruLowFrequencyContainer(*in.vruLowFrequencyContainer, out.vru_low_frequency_container);
    out.vru_low_frequency_container_is_present = true;
  }
  if (in.vruClusterInformationContainer) {
    toRos_VruClusterInformationContainer(*in.vruClusterInformationContainer, out.vru_cluster_information_container);
    out.vru_cluster_information_container_is_present = true;
  }
  if (in.vruClusterOperationContainer) {
    toRos_VruClusterOperationContainer(*in.vruClusterOperationContainer, out.vru_cluster_operation_container);
    out.vru_cluster_operation_container_is_present = true;
  }
  if (in.vruMotionPredictionContainer) {
    toRos_VruMotionPredictionContainer(*in.vruMotionPredictionContainer, out.vru_motion_prediction_container);
    out.vru_motion_prediction_container_is_present = true;
  }
}

void toStruct_VamParameters(const vam_ts_msgs::VamParameters& in, vam_ts_VamParameters_t& out) {
  memset(&out, 0, sizeof(vam_ts_VamParameters_t));
  toStruct_BasicContainer(in.basic_container, out.basicContainer);
  toStruct_VruHighFrequencyContainer(in.vru_high_frequency_container, out.vruHighFrequencyContainer);
  if (in.vru_low_frequency_container_is_present) {
    out.vruLowFrequencyContainer = (vam_ts_VruLowFrequencyContainer_t*) calloc(1, sizeof(vam_ts_VruLowFrequencyContainer_t));
    toStruct_VruLowFrequencyContainer(in.vru_low_frequency_container, *out.vruLowFrequencyContainer);
  }
  if (in.vru_cluster_information_container_is_present) {
    out.vruClusterInformationContainer = (vam_ts_VruClusterInformationContainer_t*) calloc(1, sizeof(vam_ts_VruClusterInformationContainer_t));
    toStruct_VruClusterInformationContainer(in.vru_cluster_information_container, *out.vruClusterInformationContainer);
  }
  if (in.vru_cluster_operation_container_is_present) {
    out.vruClusterOperationContainer = (vam_ts_VruClusterOperationContainer_t*) calloc(1, sizeof(vam_ts_VruClusterOperationContainer_t));
    toStruct_VruClusterOperationContainer(in.vru_cluster_operation_container, *out.vruClusterOperationContainer);
  }
  if (in.vru_motion_prediction_container_is_present) {
    out.vruMotionPredictionContainer = (vam_ts_VruMotionPredictionContainer_t*) calloc(1, sizeof(vam_ts_VruMotionPredictionContainer_t));
    toStruct_VruMotionPredictionContainer(in.vru_motion_prediction_container, *out.vruMotionPredictionContainer);
  }
}

}
