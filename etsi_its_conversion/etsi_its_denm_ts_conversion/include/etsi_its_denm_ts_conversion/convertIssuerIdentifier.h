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
  asn1/raw/denm_ts103831/DENM-PDU-Descriptions.asn \
  asn1/patched/denm_ts103831/cdd/ETSI-ITS-CDD.asn \
  -t \
  denm_ts \
  -o \
  etsi_its_conversion/etsi_its_denm_ts_conversion/include/etsi_its_denm_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
* 
 * This DE represent the identifier of an organization according to the applicable registry.
 *
 * @category: Basic information
 * @revision: Created in V2.2.1 based on ISO 14816 [23]
*
IssuerIdentifier ::= INTEGER(0 .. 16383)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_IssuerIdentifier.h>
#include <etsi_its_denm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/IssuerIdentifier.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/issuer_identifier.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_IssuerIdentifier(const denm_ts_IssuerIdentifier_t& in, denm_ts_msgs::IssuerIdentifier& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_IssuerIdentifier(const denm_ts_msgs::IssuerIdentifier& in, denm_ts_IssuerIdentifier_t& out) {
  memset(&out, 0, sizeof(denm_ts_IssuerIdentifier_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}
