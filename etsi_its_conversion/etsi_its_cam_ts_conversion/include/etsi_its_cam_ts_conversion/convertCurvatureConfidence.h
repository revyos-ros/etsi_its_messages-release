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
 * This DE indicates the acceleration confidence value which represents the estimated absolute accuracy range of a curvature value with a confidence level of 95 %.
 * If required, the confidence level can be defined by the corresponding standards applying this DE.
 * 
 * The value shall be set to:
 * - 0 - `onePerMeter-0-00002` - if the confidence value is less than or equal to 0,00002 m-1,
 * - 1 - `onePerMeter-0-0001`  - if the confidence value is less than or equal to 0,0001 m-1 and greater than 0,00002 m-1,
 * - 2 - `onePerMeter-0-0005`  - if the confidence value is less than or equal to 0,0005 m-1 and greater than 0,0001 m-1,
 * - 3 - `onePerMeter-0-002`   - if the confidence value is less than or equal to 0,002 m-1 and greater than 0,0005 m-1,
 * - 4 - `nePerMeter-0-01`     - if the confidence value is less than or equal to 0,01 m-1 and greater than 0,002 m-1,
 * - 5 - `nePerMeter-0-1`      - if the confidence value is less than or equal to 0,1 m-1  and greater than 0,01 m-1,
 * - 6 - `outOfRange`          - if the confidence value is out of range, i.e. greater than 0,1 m-1,
 * - 7 - `unavailable`         - if the confidence value is not available.
 * 
 * @note:	The fact that a curvature value is received with confidence value set to `unavailable(7)` can be caused by
 * several reasons, such as:
 * - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
 * - the sensor cannot calculate the accuracy due to lack of variables, or
 * - there has been a vehicle bus (e.g. CAN bus) error.
 * In all 3 cases above, the curvature value may be valid and used by the application.
 * 
 * @note: If a curvature value is received and its confidence value is set to `outOfRange(6)`, it means that the curvature value is not valid 
 * and therefore cannot be trusted. Such value is not useful for the application.
 * 
 * @category: Vehicle information
 * @revision: Description revised in V2.1.1
*
CurvatureConfidence ::= ENUMERATED {
    onePerMeter-0-00002 (0),
    onePerMeter-0-0001  (1),
    onePerMeter-0-0005  (2),
    onePerMeter-0-002   (3),
    onePerMeter-0-01    (4),
    onePerMeter-0-1     (5),
    outOfRange          (6),
    unavailable         (7)
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_CurvatureConfidence.h>

#ifdef ROS1
#include <etsi_its_cam_ts_msgs/CurvatureConfidence.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/curvature_confidence.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_CurvatureConfidence(const cam_ts_CurvatureConfidence_t& in, cam_ts_msgs::CurvatureConfidence& out) {
  out.value = in;
}

void toStruct_CurvatureConfidence(const cam_ts_msgs::CurvatureConfidence& in, cam_ts_CurvatureConfidence_t& out) {
  memset(&out, 0, sizeof(cam_ts_CurvatureConfidence_t));
  out = in.value;
}

}
