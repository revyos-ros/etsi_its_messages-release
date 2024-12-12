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
  asn1/raw/denm_en302637_3/DENM-PDU-Descriptions.asn \
  asn1/raw/denm_en302637_3/cdd/ITS-Container.asn \
  -t \
  denm \
  -o \
  etsi_its_conversion/etsi_its_denm_conversion/include/etsi_its_denm_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
ItsPduHeader ::= SEQUENCE {
    protocolVersion INTEGER (0..255),
    messageID INTEGER{ denm(1), cam(2), poi(3), spatem(4), mapem(5), ivim(6), ev-rsr(7), tistpgtransaction(8), srem(9), ssem(10), evcsn(11), saem(12), rtcmem(13) } (0..255),  -- Mantis #7209, #7005
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_coding/denm_ItsPduHeader.h>
#include <etsi_its_denm_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#include <etsi_its_denm_conversion/convertStationID.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/ItsPduHeader.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/its_pdu_header.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_ItsPduHeader(const denm_ItsPduHeader_t& in, denm_msgs::ItsPduHeader& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in.protocolVersion, out.protocol_version);
  etsi_its_primitives_conversion::toRos_INTEGER(in.messageID, out.message_id);
  toRos_StationID(in.stationID, out.station_id);
}

void toStruct_ItsPduHeader(const denm_msgs::ItsPduHeader& in, denm_ItsPduHeader_t& out) {
  memset(&out, 0, sizeof(denm_ItsPduHeader_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.protocol_version, out.protocolVersion);
  etsi_its_primitives_conversion::toStruct_INTEGER(in.message_id, out.messageID);
  toStruct_StationID(in.station_id, out.stationID);
}

}