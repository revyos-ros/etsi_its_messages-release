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
 * This DF  represents the Perceived Object Container 
 *
 * It shall include the following components: 
 *
 * @field numberOfPerceivedObjects: the total number of perceived objects at the time of generating the message. 
 *
 * @field perceivedObjects: the list of perceived objects.
 *
*
PerceivedObjectContainer ::= SEQUENCE {
    numberOfPerceivedObjects    CardinalNumber1B,
    perceivedObjects            PerceivedObjects,
    ...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_PerceivedObjectContainer.h>
#include <etsi_its_cpm_ts_conversion/convertCardinalNumber1B.h>
#include <etsi_its_cpm_ts_conversion/convertPerceivedObjects.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/PerceivedObjectContainer.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/perceived_object_container.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_PerceivedObjectContainer(const cpm_ts_PerceivedObjectContainer_t& in, cpm_ts_msgs::PerceivedObjectContainer& out) {
  toRos_CardinalNumber1B(in.numberOfPerceivedObjects, out.number_of_perceived_objects);
  toRos_PerceivedObjects(in.perceivedObjects, out.perceived_objects);
}

void toStruct_PerceivedObjectContainer(const cpm_ts_msgs::PerceivedObjectContainer& in, cpm_ts_PerceivedObjectContainer_t& out) {
  memset(&out, 0, sizeof(cpm_ts_PerceivedObjectContainer_t));
  toStruct_CardinalNumber1B(in.number_of_perceived_objects, out.numberOfPerceivedObjects);
  toStruct_PerceivedObjects(in.perceived_objects, out.perceivedObjects);
}

}