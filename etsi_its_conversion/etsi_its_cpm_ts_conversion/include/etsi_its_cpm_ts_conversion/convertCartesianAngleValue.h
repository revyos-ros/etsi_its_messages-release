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
 * This DE represents an angle value described in a local Cartesian coordinate system, per default counted positive in
 * a right-hand local coordinate system from the abscissa.
 *
 * The value shall be set to: 
 * - `n` (`n >= 0` and `n < 3600`) if the angle is equal to or less than n x 0,1 degrees, and greater than (n-1) x 0,1 degrees,
 * - `36001` if the accuracy information is not available.
 *
 * The value 3600 shall not be used. 
 * 
 * @unit 0,1 degrees
 * @category: Basic information
 * @revision: Created in V2.1.1
*
CartesianAngleValue ::= INTEGER {
    valueNotUsed (3600),
    unavailable  (3601)
} (0..3601)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_CartesianAngleValue.h>
#include <etsi_its_cpm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/CartesianAngleValue.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/cartesian_angle_value.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_CartesianAngleValue(const cpm_ts_CartesianAngleValue_t& in, cpm_ts_msgs::CartesianAngleValue& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_CartesianAngleValue(const cpm_ts_msgs::CartesianAngleValue& in, cpm_ts_CartesianAngleValue_t& out) {
  memset(&out, 0, sizeof(cpm_ts_CartesianAngleValue_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
