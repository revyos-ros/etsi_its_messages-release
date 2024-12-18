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
 * This DE represents the Bravais-Pearson correlation value for each cell of a lower triangular correlation matrix.
 *
 * The value shall be set to: 
 * - `-100` in case of full negative correlation,
 * - `n` (`n > -100` and `n < 0`) if the correlation is negative and equal to n x 100,
 * - `0` in case of no correlation,
 * - `n` (`n > 0` and `n < 100`) if the correlation is positive and equal to n x 100,
 * - `100` in case of full positive correlation,
 * - `101` in case the correlation information is unavailable. 
 *
 * @unit: the value is scaled by 100
 * @category: Basic information
 * @revision: Created in V2.1.1
*
CorrelationCellValue ::= INTEGER {
    full-negative-correlation    (-100),     
    no-correlation               (0),       
    full-positive-correlation    (100),
    unavailable (101)  
} (-100..101)
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cpm_ts_coding/cpm_ts_CorrelationCellValue.h>
#include <etsi_its_cpm_ts_coding/INTEGER.h>
#include <etsi_its_primitives_conversion/convertINTEGER.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/CorrelationCellValue.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/correlation_cell_value.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_CorrelationCellValue(const cpm_ts_CorrelationCellValue_t& in, cpm_ts_msgs::CorrelationCellValue& out) {
  etsi_its_primitives_conversion::toRos_INTEGER(in, out.value);
}

void toStruct_CorrelationCellValue(const cpm_ts_msgs::CorrelationCellValue& in, cpm_ts_CorrelationCellValue_t& out) {
  memset(&out, 0, sizeof(cpm_ts_CorrelationCellValue_t));
  etsi_its_primitives_conversion::toStruct_INTEGER(in.value, out);
}

}