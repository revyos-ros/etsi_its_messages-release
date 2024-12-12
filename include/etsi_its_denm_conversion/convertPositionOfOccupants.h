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
PositionOfOccupants ::= BIT STRING {
    row1LeftOccupied (0),
    row1RightOccupied (1),
    row1MidOccupied (2),
    row1NotDetectable (3),
    row1NotPresent (4),
    row2LeftOccupied (5),
    row2RightOccupied (6),
    row2MidOccupied (7),
    row2NotDetectable (8),
    row2NotPresent (9),
    row3LeftOccupied (10),
    row3RightOccupied (11),
    row3MidOccupied (12),
    row3NotDetectable (13),
    row3NotPresent (14),
    row4LeftOccupied (15),
    row4RightOccupied (16),
    row4MidOccupied (17),
    row4NotDetectable (18),
    row4NotPresent (19)} (SIZE(20))
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_coding/denm_PositionOfOccupants.h>
#include <etsi_its_denm_coding/BIT_STRING.h>
#include <etsi_its_primitives_conversion/convertBIT_STRING.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/PositionOfOccupants.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/position_of_occupants.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_PositionOfOccupants(const denm_PositionOfOccupants_t& in, denm_msgs::PositionOfOccupants& out) {
  etsi_its_primitives_conversion::toRos_BIT_STRING(in, out.value);
  out.bits_unused = in.bits_unused;
}

void toStruct_PositionOfOccupants(const denm_msgs::PositionOfOccupants& in, denm_PositionOfOccupants_t& out) {
  memset(&out, 0, sizeof(denm_PositionOfOccupants_t));
  etsi_its_primitives_conversion::toStruct_BIT_STRING(in.value, out);
  out.bits_unused = in.bits_unused;
}

}