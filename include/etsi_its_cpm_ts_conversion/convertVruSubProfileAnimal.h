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
 * This DE indicates the profile of an animal
 * 
 * The value shall be set to:
 * - 0 `unavailable`     - to indicate that the information  is unavailable,
 * - 1 `wild-animal`     - to indicate a animal living in the wildness, 
 * - 2 `farm-animal`     - to indicate an animal beloning to a farm,
 * - 3 `service-animal`  - to indicate an animal that supports a human being.
 * - 4 to 15             - are reserved for future usage. Value 15 is set to "max" in order to bound the size of the encoded field.
 *
 * @category: VRU information
 * @revision: Created in V2.1.1
 *
VruSubProfileAnimal ::= ENUMERATED {
    unavailable    (0), 
    wild-animal    (1), 
    farm-animal    (2), 
    service-animal (3),   
    max            (15)
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_VruSubProfileAnimal.h>

#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/VruSubProfileAnimal.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/vru_sub_profile_animal.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_VruSubProfileAnimal(const cpm_ts_VruSubProfileAnimal_t& in, cpm_ts_msgs::VruSubProfileAnimal& out) {
  out.value = in;
}

void toStruct_VruSubProfileAnimal(const cpm_ts_msgs::VruSubProfileAnimal& in, cpm_ts_VruSubProfileAnimal_t& out) {
  memset(&out, 0, sizeof(cpm_ts_VruSubProfileAnimal_t));
  out = in.value;
}

}
