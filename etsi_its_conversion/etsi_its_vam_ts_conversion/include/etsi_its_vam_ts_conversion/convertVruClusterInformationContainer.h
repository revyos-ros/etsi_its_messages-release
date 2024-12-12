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
 * @details VruClusterInformationContainer
 * The VRU Cluster Information container of the VAM provides the information/parameters relevant to the VRU cluster.
 * It is mandatory if the VAM is transmitted by VRU cluster leader.
 * It includes the following components (setting indications are specified in clause 7.3.5 of TS 103 300-3): 
 *
 * @field vruClusterInformation: set of parammeters releated to the VRU cluster. 
 *        When transmitted by a VRU ITS-S, the clusterId and clusterBoundingBoxShape fields inside this DF shall be present.
 *        The clusterBoundingBoxShape is positioned with respect to the position sent in the BasicContainer.
 * 
 * @category: VRU information
 * @revision: V2.2.1
 *
    VruClusterInformationContainer::= SEQUENCE{ 
        vruClusterInformation    VruClusterInformation (WITH COMPONENTS{..., clusterId, clusterBoundingBoxShape PRESENT}), 
        ...
    }
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_VruClusterInformationContainer.h>
#include <etsi_its_vam_ts_conversion/convertVruClusterInformation.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/VruClusterInformationContainer.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/vru_cluster_information_container.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_VruClusterInformationContainer(const vam_ts_VruClusterInformationContainer_t& in, vam_ts_msgs::VruClusterInformationContainer& out) {
  toRos_VruClusterInformation(in.vruClusterInformation, out.vru_cluster_information);
}

void toStruct_VruClusterInformationContainer(const vam_ts_msgs::VruClusterInformationContainer& in, vam_ts_VruClusterInformationContainer_t& out) {
  memset(&out, 0, sizeof(vam_ts_VruClusterInformationContainer_t));
  toStruct_VruClusterInformation(in.vru_cluster_information, out.vruClusterInformation);
}

}
