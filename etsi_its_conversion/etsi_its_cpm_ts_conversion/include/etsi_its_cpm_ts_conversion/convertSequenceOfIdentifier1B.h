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
 * The DF contains a list of DE @ref Identifier1B.
 *
 * @category: Basic information
 * @revision: created in V2.1.1
*
SequenceOfIdentifier1B ::= SEQUENCE SIZE(1..128, ...) OF Identifier1B
----------------------------------------------------------------------------- */

#pragma once

#include <stdexcept>

#include <etsi_its_cpm_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_cpm_ts_coding/cpm_ts_SequenceOfIdentifier1B.h>
#include <etsi_its_cpm_ts_coding/cpm_ts_Identifier1B.h>
#include <etsi_its_cpm_ts_conversion/convertIdentifier1B.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/Identifier1B.h>
#include <etsi_its_cpm_ts_msgs/SequenceOfIdentifier1B.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/identifier1_b.hpp>
#include <etsi_its_cpm_ts_msgs/msg/sequence_of_identifier1_b.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_SequenceOfIdentifier1B(const cpm_ts_SequenceOfIdentifier1B_t& in, cpm_ts_msgs::SequenceOfIdentifier1B& out) {
  for (int i = 0; i < in.list.count; ++i) {
    cpm_ts_msgs::Identifier1B el;
    toRos_Identifier1B(*(in.list.array[i]), el);
    out.array.push_back(el);
  }
}

void toStruct_SequenceOfIdentifier1B(const cpm_ts_msgs::SequenceOfIdentifier1B& in, cpm_ts_SequenceOfIdentifier1B_t& out) {
  memset(&out, 0, sizeof(cpm_ts_SequenceOfIdentifier1B_t));
  for (int i = 0; i < in.array.size(); ++i) {
    cpm_ts_Identifier1B_t* el = (cpm_ts_Identifier1B_t*) calloc(1, sizeof(cpm_ts_Identifier1B_t));
    toStruct_Identifier1B(in.array[i], *el);
    if (asn_sequence_add(&out, el)) throw std::invalid_argument("Failed to add to A_SEQUENCE_OF");
  }
}

}
