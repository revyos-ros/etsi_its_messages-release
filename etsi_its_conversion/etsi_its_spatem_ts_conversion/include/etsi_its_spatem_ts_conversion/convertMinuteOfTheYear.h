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
MinuteOfTheYear ::= INTEGER (0..527040) 
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_spatem_ts_coding/spatem_ts_MinuteOfTheYear.h>
#include <etsi_its_spatem_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_spatem_ts_msgs/MinuteOfTheYear.h>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs;
#else
#include <etsi_its_spatem_ts_msgs/msg/minute_of_the_year.hpp>
namespace spatem_ts_msgs = etsi_its_spatem_ts_msgs::msg;
#endif


namespace etsi_its_spatem_ts_conversion {

void toRos_MinuteOfTheYear(const spatem_ts_MinuteOfTheYear_t& in, spatem_ts_msgs::MinuteOfTheYear& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_MinuteOfTheYear(const spatem_ts_msgs::MinuteOfTheYear& in, spatem_ts_MinuteOfTheYear_t& out) {
  memset(&out, 0, sizeof(spatem_ts_MinuteOfTheYear_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
