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
 * This DE represents the type of facility layer message.
 *
 *  The value shall be set to:
 *	- 1  - `denm`              - for Decentralized Environmental Notification Message (DENM) as specified in ETSI EN 302 637-3 [2],
 *  - 2  - `cam`               - for Cooperative Awareness Message (CAM) as specified in ETSI EN 302 637-2 [1],
 *  - 3  - `poi`               - for Point of Interest message as specified in ETSI TS 101 556-1 [9],
 *  - 4  - `spatem`            - for Signal Phase And Timing Extended Message (SPATEM) as specified in ETSI TS 103 301 [15],
 *  - 5  - `mapem`             - for MAP Extended Message (MAPEM) as specified in ETSI TS 103 301 [15],
 *  - 6  - `ivim`              - for in Vehicle Information Message (IVIM) as specified in ETSI TS 103 301 [15],
 *  - 7  - `ev-rsr`            - for Electric vehicle recharging spot reservation message, as defined in ETSI TS 101 556-3 [11],
 *  - 8  - `tistpgtransaction` - for messages for Tyre Information System (TIS) and Tyre Pressure Gauge (TPG) interoperability, as specified in ETSI TS 101 556-2 [10],
 *  - 9  - `srem`              - for Signal Request Extended Message as specified in ETSI TS 103 301 [15],
 *  - 10 - `ssem`              - for Signal request Status Extended Message as specified in ETSI TS 103 301 [15],
 *  - 11 - `evcsn`             - for Electrical Vehicle Charging Spot Notification message as specified in ETSI TS 101 556-1 [9],
 *  - 12 - `saem`              - for Services Announcement Extended Message as specified in ETSI EN 302 890-1 [17],
 *  - 13 - `rtcmem`            - for Radio Technical Commission for Maritime Services Extended Message (RTCMEM) as specified in ETSI TS 103 301 [15],
 *  - 14 - `cpm`               - reserved for Collective Perception Message (CPM), 
 *  - 15 - `imzm`              - for Interference Management Zone Message (IMZM) as specified in ETSI TS 103 724 [13],
 *  - 16 - `vam`               - for Vulnerable Road User Awareness Message as specified in ETSI TS 130 300-3 [12], 
 *  - 17 - `dsm`               - reserved for Diagnosis, logging and Status Message,
 *  - 18 - `pcim`              - reserved for Parking Control Infrastructure Message,
 *  - 19 - `pcvm`              - reserved for Parking Control Vehicle Message,
 *  - 20 - `mcm`               - reserved for Manoeuvre Coordination Message,
 *  - 21 - `pam`               - reserved for Parking Availability Message,
 *  - 22-255                   - reserved for future usage.
 *
 * @category: Communication information
 * @revision: Created in V2.1.1 from @ref ItsPduHeader.
 *
MessageId::= INTEGER { 
    denm              (1),  
    cam               (2), 
    poi               (3), 
    spatem            (4), 
    mapem             (5), 
    ivim              (6), 
    ev-rsr            (7), 
    tistpgtransaction (8), 
    srem              (9), 
    ssem              (10), 
    evcsn             (11), 
    saem              (12), 
    rtcmem            (13), 
    cpm               (14),
    imzm              (15),
    vam               (16),
    dsm               (17), 
    pcim              (18),
    pcvm              (19),
    mcm               (20),
    pam               (21)
} (0..255)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_MessageId.h>
#include <etsi_its_cpm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/MessageId.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/message_id.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_MessageId(const cpm_ts_MessageId_t& in, cpm_ts_msgs::MessageId& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_MessageId(const cpm_ts_msgs::MessageId& in, cpm_ts_MessageId_t& out) {
  memset(&out, 0, sizeof(cpm_ts_MessageId_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}