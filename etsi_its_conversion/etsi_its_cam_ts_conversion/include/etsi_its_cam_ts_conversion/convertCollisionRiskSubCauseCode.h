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
 * This DE represents the sub cause codes of the @ref CauseCode `collisionRisk`.
 * 
 * The value shall be set to:
 * - 0 - `unavailable`                    - in case information on the type of collision risk is unavailable,
 * - 1 - `longitudinalCollisionRisk`      - in case the type of detected collision risk is longitudinal collision risk, 
 *                                          e.g. forward collision or face to face collision,
 * - 2 - `crossingCollisionRisk`          - in case the type of detected collision risk is crossing collision risk,
 * - 3 - `lateralCollisionRisk`           - in case the type of detected collision risk is lateral collision risk,
 * - 4 - `vulnerableRoadUser`             - in case the type of detected collision risk involves vulnerable road users
 *                                          e.g. pedestrians or bicycles.
 * - 5 - `collisionRiskWithPedestrian`    - in case the type of detected collision risk involves at least one pedestrian, 
 * - 6 - `collisionRiskWithCyclist`       - in case the type of detected collision risk involves at least one cyclist (and no pedestrians),
 * - 7 - `collisionRiskWithMotorVehicle`  - in case the type of detected collision risk involves at least one motor vehicle (and no pedestrians or cyclists),
 * - 8-255                                - are reserved for future usage.
 *
 * @category: Traffic information
 * @revision: V1.3.1, values 5-7 assigned in V2.2.1
 *
CollisionRiskSubCauseCode ::= INTEGER {
    unavailable                   (0), 
    longitudinalCollisionRisk     (1), 
    crossingCollisionRisk         (2), 
    lateralCollisionRisk          (3), 
    vulnerableRoadUser            (4),
    collisionRiskWithPedestrian   (5), 
    collisionRiskWithCyclist      (6), 
    collisionRiskWithMotorVehicle (7) 
}(0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_CollisionRiskSubCauseCode.h>
#include <etsi_its_cam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/CollisionRiskSubCauseCode.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/collision_risk_sub_cause_code.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_CollisionRiskSubCauseCode(const cam_ts_CollisionRiskSubCauseCode_t& in, cam_ts_msgs::CollisionRiskSubCauseCode& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_CollisionRiskSubCauseCode(const cam_ts_msgs::CollisionRiskSubCauseCode& in, cam_ts_CollisionRiskSubCauseCode_t& out) {
  memset(&out, 0, sizeof(cam_ts_CollisionRiskSubCauseCode_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}