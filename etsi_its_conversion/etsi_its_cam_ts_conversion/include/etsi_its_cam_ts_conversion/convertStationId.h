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
 * This DE represents the identifier of an ITS-S.
 * The ITS-S ID may be a pseudonym. It may change over space and/or over time.
 *
 * @category: Basic information
 * @revision: Created in V2.1.1 based on @ref StationID
 *
StationId ::= INTEGER(0..4294967295)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_StationId.h>
#include <etsi_its_cam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/StationId.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/station_id.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_StationId(const cam_ts_StationId_t& in, cam_ts_msgs::StationId& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_StationId(const cam_ts_msgs::StationId& in, cam_ts_StationId_t& out) {
  memset(&out, 0, sizeof(cam_ts_StationId_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
