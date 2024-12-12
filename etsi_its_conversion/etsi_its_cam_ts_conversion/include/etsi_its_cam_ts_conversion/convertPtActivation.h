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
  asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn \
  asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn \
  -t \
  cam_ts \
  -o \
  etsi_its_conversion/etsi_its_cam_ts_conversion/include/etsi_its_cam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DF represents activation data for real-time systems designed for operations control, traffic light priorities, track switches, barriers, etc.
 * using a range of activation devices equipped in public transport vehicles.
 *
 * The activation of the corresponding equipment is triggered by the approach or passage of a public transport
 * vehicle at a certain point (e.g. a beacon).
 *
 * @field ptActivationType: type of activation. 
 *
 * @field ptActicationData: data of activation. 
 *
 * Today there are different payload variants defined for public transport activation-data. The R09.x is one of
 * the industry standard used by public transport vehicles (e.g. buses, trams) in Europe (e.g. Germany Austria)
 * for controlling traffic lights, barriers, bollards, etc. This DF shall include information like route, course,
 * destination, priority, etc.
 * 
 * The R09.x content is defined in VDV recommendation 420 [7]. It includes following information:
 * - Priority Request Information (pre-request, request, ready to start)
 * - End of Prioritization procedure
 * - Priority request direction
 * - Public Transport line number
 * - Priority of public transport
 * - Route line identifier of the public transport
 * - Route number identification
 * - Destination of public transport vehicle
 *
 * Other countries may use different message sets defined by the local administration.
 * @category: Vehicle information
 * @revision: V1.3.1
 *
PtActivation ::= SEQUENCE {
    ptActivationType    PtActivationType,
    ptActivationData    PtActivationData
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_PtActivation.h>
#include <etsi_its_cam_ts_conversion/convertPtActivationData.h>
#include <etsi_its_cam_ts_conversion/convertPtActivationType.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/PtActivation.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/pt_activation.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_PtActivation(const cam_ts_PtActivation_t& in, cam_ts_msgs::PtActivation& out) {
  toRos_PtActivationType(in.ptActivationType, out.pt_activation_type);
  toRos_PtActivationData(in.ptActivationData, out.pt_activation_data);
}

void toStruct_PtActivation(const cam_ts_msgs::PtActivation& in, cam_ts_PtActivation_t& out) {
  memset(&out, 0, sizeof(cam_ts_PtActivation_t));
  toStruct_PtActivationType(in.pt_activation_type, out.ptActivationType);
  toStruct_PtActivationData(in.pt_activation_data, out.ptActivationData);
}

}