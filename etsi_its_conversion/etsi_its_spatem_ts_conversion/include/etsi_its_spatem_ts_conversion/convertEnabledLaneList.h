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
  asn1/raw/is_ts103301/SPATEM-PDU-Descriptions.asn \
  asn1/raw/is_ts103301/cdd/ITS-Container.asn \
  asn1/raw/is_ts103301/iso-patched/ISO24534-3_ElectronicRegistrationIdentificationVehicleDataModule-patched.asn \
  asn1/raw/is_ts103301/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn \
  asn1/patched/is_ts103301/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn \
  -t \
  spatem_ts \
  -o \
  etsi_its_conversion/etsi_its_spatem_ts_conversion/include/etsi_its_spatem_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
EnabledLaneList ::= SEQUENCE (SIZE(1..16)) OF LaneID
----------------------------------------------------------------------------- */

#pragma once

#include <stdexcept>

#include <etsi_its_spatem_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_spatem_ts_coding/spatem_ts_EnabledLaneList.h>
#include <etsi_its_spatem_ts_coding/spatem_ts_LaneID.h>
#include <etsi_its_spatem_ts_conversion/convertLaneID.h>
#ifdef ROS1
#include <etsi_its_spatem_ts_msgs/LaneID.h>
#include <etsi_its_spatem_ts_msgs/EnabledLaneList.h>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs;
#else
#include <etsi_its_spatem_ts_msgs/msg/lane_id.hpp>
#include <etsi_its_spatem_ts_msgs/msg/enabled_lane_list.hpp>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs::msg;
#endif


namespace etsi_its_spatem_ts_conversion {

void toRos_EnabledLaneList(const spatem_ts_EnabledLaneList_t& in, spatem_ts_msgs::EnabledLaneList& out) {
  for (int i = 0; i < in.list.count; ++i) {
    spatem_ts_msgs::LaneID el;
    toRos_LaneID(*(in.list.array[i]), el);
    out.array.push_back(el);
  }
}

void toStruct_EnabledLaneList(const spatem_ts_msgs::EnabledLaneList& in, spatem_ts_EnabledLaneList_t& out) {
  memset(&out, 0, sizeof(spatem_ts_EnabledLaneList_t));
  for (int i = 0; i < in.array.size(); ++i) {
    spatem_ts_LaneID_t* el = (spatem_ts_LaneID_t*) calloc(1, sizeof(spatem_ts_LaneID_t));
    toStruct_LaneID(in.array[i], *el);
    if (asn_sequence_add(&out, el)) throw std::invalid_argument("Failed to add to A_SEQUENCE_OF");
  }
}

}
