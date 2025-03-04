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
 * This DF shall contain a list of a lower triangular positive semi-definite matrices.
 *
 * @category: Sensing information
 * @revision: Created in V2.1.1
*
LowerTriangularPositiveSemidefiniteMatrices::= SEQUENCE SIZE (1..4) OF LowerTriangularPositiveSemidefiniteMatrix
----------------------------------------------------------------------------- */

#pragma once

#include <stdexcept>

#include <etsi_its_cpm_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_cpm_ts_coding/cpm_ts_LowerTriangularPositiveSemidefiniteMatrices.h>
#include <etsi_its_cpm_ts_coding/cpm_ts_LowerTriangularPositiveSemidefiniteMatrix.h>
#include <etsi_its_cpm_ts_conversion/convertLowerTriangularPositiveSemidefiniteMatrix.h>
#ifdef ROS1
#include <etsi_its_cpm_ts_msgs/LowerTriangularPositiveSemidefiniteMatrix.h>
#include <etsi_its_cpm_ts_msgs/LowerTriangularPositiveSemidefiniteMatrices.h>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs;
#else
#include <etsi_its_cpm_ts_msgs/msg/lower_triangular_positive_semidefinite_matrix.hpp>
#include <etsi_its_cpm_ts_msgs/msg/lower_triangular_positive_semidefinite_matrices.hpp>
namespace cpm_ts_msgs = etsi_its_cpm_ts_msgs::msg;
#endif


namespace etsi_its_cpm_ts_conversion {

void toRos_LowerTriangularPositiveSemidefiniteMatrices(const cpm_ts_LowerTriangularPositiveSemidefiniteMatrices_t& in, cpm_ts_msgs::LowerTriangularPositiveSemidefiniteMatrices& out) {
  for (int i = 0; i < in.list.count; ++i) {
    cpm_ts_msgs::LowerTriangularPositiveSemidefiniteMatrix el;
    toRos_LowerTriangularPositiveSemidefiniteMatrix(*(in.list.array[i]), el);
    out.array.push_back(el);
  }
}

void toStruct_LowerTriangularPositiveSemidefiniteMatrices(const cpm_ts_msgs::LowerTriangularPositiveSemidefiniteMatrices& in, cpm_ts_LowerTriangularPositiveSemidefiniteMatrices_t& out) {
  memset(&out, 0, sizeof(cpm_ts_LowerTriangularPositiveSemidefiniteMatrices_t));
  for (int i = 0; i < in.array.size(); ++i) {
    cpm_ts_LowerTriangularPositiveSemidefiniteMatrix_t* el = (cpm_ts_LowerTriangularPositiveSemidefiniteMatrix_t*) calloc(1, sizeof(cpm_ts_LowerTriangularPositiveSemidefiniteMatrix_t));
    toStruct_LowerTriangularPositiveSemidefiniteMatrix(in.array[i], *el);
    if (asn_sequence_add(&out, el)) throw std::invalid_argument("Failed to add to A_SEQUENCE_OF");
  }
}

}
