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
  asn1/raw/cam_ts103900/CAM-PDU-Descriptions.asn \
  asn1/patched/cam_ts103900/cdd/ETSI-ITS-CDD.asn \
  -t \
  cam_ts \
  -o \
  etsi_its_conversion/etsi_its_cam_ts_conversion/include/etsi_its_cam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DE represents the value of the sub cause codes of the @ref CauseCode `railwayLevelCrossing` .
 * 
 * The value shall be set to:
 * - 0 `unavailable`                   - in case no further detailed information on the railway level crossing status is available,
 * - 1 `doNotCrossAbnormalSituation`   - in case when something wrong is detected by equation or sensors of the railway level crossing, 
                                         including level crossing is closed for too long (e.g. more than 10 minutes long ; default value),
 * - 2 `closed`                        - in case the crossing is closed (barriers down),
 * - 3 `unguarded`                     - in case the level crossing is unguarded (i.e a Saint Andrew cross level crossing without detection of train),
 * - 4 `nominal`                       - in case the barriers are up and lights are off.
 * - 5-255: reserved for future usage.
 *
 * @category: Traffic information
 * @revision: V1.3.1
 *
RailwayLevelCrossingSubCauseCode ::= INTEGER {
    unavailable                 (0), 
    doNotCrossAbnormalSituation (1), 
    closed                      (2), 
    unguarded                   (3), 
    nominal                     (4)
} (0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_RailwayLevelCrossingSubCauseCode.h>
#include <etsi_its_cam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/RailwayLevelCrossingSubCauseCode.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/railway_level_crossing_sub_cause_code.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_RailwayLevelCrossingSubCauseCode(const cam_ts_RailwayLevelCrossingSubCauseCode_t& in, cam_ts_msgs::RailwayLevelCrossingSubCauseCode& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_RailwayLevelCrossingSubCauseCode(const cam_ts_msgs::RailwayLevelCrossingSubCauseCode& in, cam_ts_RailwayLevelCrossingSubCauseCode_t& out) {
  memset(&out, 0, sizeof(cam_ts_RailwayLevelCrossingSubCauseCode_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
