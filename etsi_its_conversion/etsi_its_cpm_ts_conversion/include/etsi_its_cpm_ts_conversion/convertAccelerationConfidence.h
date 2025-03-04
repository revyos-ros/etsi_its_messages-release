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
 * This DE indicates the acceleration confidence value which represents the estimated absolute accuracy of an acceleration value with a default confidence level of 95 %. 
 * If required, the confidence level can be defined by the corresponding standards applying this DE.
 *
 * The value shall be set to:
 * - `n` (`n > 0` and `n < 101`) if the confidence value is equal to or less than n x 0,1 m/s^2, and greater than (n-1) x 0,1 m/s^2,
 * - `101` if the confidence value is out of range i.e. greater than 10 m/s^2,
 * - `102` if the confidence value is unavailable.
 *
 * The value 0 shall not be used.
 *
 * @note: The fact that an acceleration value is received with confidence value set to `unavailable(102)` can be caused by several reasons, such as:
 * - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
 * - the sensor cannot calculate the accuracy due to lack of variables, or
 * - there has been a vehicle bus (e.g. CAN bus) error.
 * In all 3 cases above, the acceleration value may be valid and used by the application.
 * 
 * @note: If an acceleration value is received and its confidence value is set to `outOfRange(101)`, it means that the value is not valid and therefore cannot be trusted. Such value is not useful for the application.
 *
 * @unit 0,1 m/s^2
 * @category: Kinematic information
 * @revision: Description revised in V2.1.1
 *
AccelerationConfidence ::= INTEGER {
    outOfRange                 (101), 
    unavailable                (102)
} (0..102)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_AccelerationConfidence.h>
#include <etsi_its_cpm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/AccelerationConfidence.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/acceleration_confidence.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_AccelerationConfidence(const cpm_ts_AccelerationConfidence_t& in, cpm_ts_msgs::AccelerationConfidence& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_AccelerationConfidence(const cpm_ts_msgs::AccelerationConfidence& in, cpm_ts_AccelerationConfidence_t& out) {
  memset(&out, 0, sizeof(cpm_ts_AccelerationConfidence_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
