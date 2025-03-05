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
 * This DE represents the vehicle rotation around z-axis of the coordinate system centred on the centre of mass of the empty-loaded
 * vehicle. The leading sign denotes the direction of rotation.
 * 
 * The value shall be provided in the vehicle coordinate system as defined in ISO 8855 [21], clause 2.11.
 *
 * The value shall be set to:
 * - `-32 766` to indicate that the yaw rate is equal to or greater than 327,66 degrees/second to the right,
 * - `n` (`n > -32 766` and `n <= 0`) to indicate that the rotation is clockwise (i.e. to the right) and is equal to or less than n x 0,01 degrees/s, 
      and greater than (n-1) x 0,01 degrees/s,
 * - `n` (`n > 0` and `n < 32 766`) to indicate that the rotation is anti-clockwise (i.e. to the left) and is equal to or less than n x 0,01 degrees/s, 
      and greater than (n-1) x 0,01 degrees/s,
 * - `32 766` to indicate that the yaw rate is greater than 327.65 degrees/second to the left,
 * - `32 767` to indicate that the information is not available.
 * 
 * The yaw rate value shall be a raw data value, i.e. not filtered, smoothed or otherwise modified.
 * The reading instant should be the same as for the vehicle acceleration.
 * 
 * @note: The empty load vehicle is defined in ISO 1176 [8], clause 4.6.
 * 
 * @unit: 0,01 degree per second. 
 * @category: Vehicle Information
 * @revision: Desription revised in V2.1.1 (the meaning of 32766 has changed slightly). 
*
YawRateValue ::= INTEGER {
    negativeOutOfRange (-32766), 
    positiveOutOfRange (32766), 
    unavailable        (32767)
} (-32766..32767)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_YawRateValue.h>
#include <etsi_its_cam_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/YawRateValue.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/yaw_rate_value.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_YawRateValue(const cam_ts_YawRateValue_t& in, cam_ts_msgs::YawRateValue& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_YawRateValue(const cam_ts_msgs::YawRateValue& in, cam_ts_YawRateValue_t& out) {
  memset(&out, 0, sizeof(cam_ts_YawRateValue_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
