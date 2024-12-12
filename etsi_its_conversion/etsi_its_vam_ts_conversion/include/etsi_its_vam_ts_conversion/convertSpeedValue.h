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
 * This DE represents a speed value, i.e. the magnitude of the velocity-vector. 
 *
 * The value shall be set to:
 * - `0` in a standstill situation.
 * - `n` (`n > 0` and `n < 16 382`) if the applicable value is equal to or less than n x 0,01 m/s, and greater than (n-1) x 0,01 m/s,
 * - `16 382` for speed values greater than 163,81 m/s,
 * - `16 383` if the speed accuracy information is not available.
 * 
 * @note: the definition of standstill is out of scope of the present document.
 *
 * @unit: 0,01 m/s
 * @category: Kinematic information
 * @revision: Description revised in V2.1.1 (the meaning of 16382 has changed slightly) 
*
SpeedValue ::= INTEGER {
    standstill  (0), 
    outOfRange  (16382), 
    unavailable (16383)
} (0..16383)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_SpeedValue.h>
#include <etsi_its_vam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/SpeedValue.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/speed_value.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_SpeedValue(const vam_ts_SpeedValue_t& in, vam_ts_msgs::SpeedValue& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_SpeedValue(const vam_ts_msgs::SpeedValue& in, vam_ts_SpeedValue_t& out) {
  memset(&out, 0, sizeof(vam_ts_SpeedValue_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}