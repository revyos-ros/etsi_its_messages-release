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
 * This DE indicates the altitude confidence value which represents the estimated absolute accuracy of an altitude value of a geographical point with a default confidence level of 95 %.
 * If required, the confidence level can be defined by the corresponding standards applying this DE.
 *
 * The value shall be set to: 
 *   - 0  - `alt-000-01`   - if the confidence value is equal to or less than 0,01 metre,
 *   - 1  - `alt-000-02`   - if the confidence value is equal to or less than 0,02 metre and greater than 0,01 metre,
 *   - 2  - `alt-000-05`   - if the confidence value is equal to or less than 0,05 metre and greater than 0,02 metre,            
 *   - 3  - `alt-000-10`   - if the confidence value is equal to or less than 0,1 metre and greater than 0,05 metre,            
 *   - 4  - `alt-000-20`   - if the confidence value is equal to or less than 0,2 metre and greater than 0,1 metre,            
 *   - 5  - `alt-000-50`   - if the confidence value is equal to or less than 0,5 metre and greater than 0,2 metre,             
 *   - 6  - `alt-001-00`   - if the confidence value is equal to or less than 1 metre and greater than 0,5 metre,             
 *   - 7  - `alt-002-00`   - if the confidence value is equal to or less than 2 metres and greater than 1 metre,             
 *   - 8  - `alt-005-00`   - if the confidence value is equal to or less than 5 metres and greater than 2 metres,              
 *   - 9  - `alt-010-00`   - if the confidence value is equal to or less than 10 metres and greater than 5 metres,             
 *   - 10 - `alt-020-00`   - if the confidence value is equal to or less than 20 metres and greater than 10 metres,            
 *   - 11 - `alt-050-00`   - if the confidence value is equal to or less than 50 metres and greater than 20 metres,            
 *   - 12 - `alt-100-00`   - if the confidence value is equal to or less than 100 metres and greater than 50 metres,           
 *   - 13 - `alt-200-00`   - if the confidence value is equal to or less than 200 metres and greater than 100 metres,           
 *   - 14 - `outOfRange`   - if the confidence value is out of range, i.e. greater than 200 metres,
 *   - 15 - `unavailable`  - if the confidence value is unavailable.       
 *
 * @note: The fact that an altitude value is received with confidence value set to `unavailable(15)` can be caused
 * by several reasons, such as:
 * - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
 * - the sensor cannot calculate the accuracy due to lack of variables, or
 * - there has been a vehicle bus (e.g. CAN bus) error.
 * In all 3 cases above, the altitude value may be valid and used by the application.
 * 
 * @note: If an altitude value is received and its confidence value is set to `outOfRange(14)`, it means that the  
 * altitude value is not valid and therefore cannot be trusted. Such value is not useful for the application.             
 *
 * @category: GeoReference information
 * @revision: Description revised in V2.1.1
 *
AltitudeConfidence ::= ENUMERATED {
    alt-000-01  (0),
    alt-000-02  (1),
    alt-000-05  (2),
    alt-000-10  (3),
    alt-000-20  (4),
    alt-000-50  (5),
    alt-001-00  (6),
    alt-002-00  (7),
    alt-005-00  (8),
    alt-010-00  (9),
    alt-020-00  (10),
    alt-050-00  (11),
    alt-100-00  (12),
    alt-200-00  (13),
    outOfRange  (14),
    unavailable (15)
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_AltitudeConfidence.h>

#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/AltitudeConfidence.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/altitude_confidence.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_AltitudeConfidence(const cpm_ts_AltitudeConfidence_t& in, cpm_ts_msgs::AltitudeConfidence& out) {
  out.value = in;
}

void toStruct_AltitudeConfidence(const cpm_ts_msgs::AltitudeConfidence& in, cpm_ts_AltitudeConfidence_t& out) {
  memset(&out, 0, sizeof(cpm_ts_AltitudeConfidence_t));
  out = in.value;
}

}
