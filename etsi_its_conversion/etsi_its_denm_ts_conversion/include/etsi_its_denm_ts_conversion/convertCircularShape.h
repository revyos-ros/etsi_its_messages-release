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
 * 
 * This DF represents the shape of a circular area or a right cylinder that is centred on the shape's reference point. 
 *
 * It shall include the following components: 
 * 
 * @field shapeReferencePoint: optional reference point that represents the centre of the circle, relative to an externally specified reference position. 
 * If this component is absent, the externally specified reference position represents the shape's reference point. 
 *
 * @field radius: the radius of the circular area.
 *
 * @field height: the optional height, present if the shape is a right cylinder extending in the positive z-axis. 
 *
 * 
 * @category: GeoReference information
 * @revision: Created in V2.1.1
 *
CircularShape ::= SEQUENCE {
    shapeReferencePoint    CartesianPosition3d OPTIONAL,
    radius                 StandardLength12b,
    height                 StandardLength12b OPTIONAL
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_CircularShape.h>
#include <etsi_its_denm_ts_conversion/convertCartesianPosition3d.h>
#include <etsi_its_denm_ts_conversion/convertStandardLength12b.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/CircularShape.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/circular_shape.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_CircularShape(const denm_ts_CircularShape_t& in, denm_ts_msgs::CircularShape& out) {
  if (in.shapeReferencePoint) {
    toRos_CartesianPosition3d(*in.shapeReferencePoint, out.shape_reference_point);
    out.shape_reference_point_is_present = true;
  }
  toRos_StandardLength12b(in.radius, out.radius);
  if (in.height) {
    toRos_StandardLength12b(*in.height, out.height);
    out.height_is_present = true;
  }
}

void toStruct_CircularShape(const denm_ts_msgs::CircularShape& in, denm_ts_CircularShape_t& out) {
  memset(&out, 0, sizeof(denm_ts_CircularShape_t));
  if (in.shape_reference_point_is_present) {
    out.shapeReferencePoint = (denm_ts_CartesianPosition3d_t*) calloc(1, sizeof(denm_ts_CartesianPosition3d_t));
    toStruct_CartesianPosition3d(in.shape_reference_point, *out.shapeReferencePoint);
  }
  toStruct_StandardLength12b(in.radius, out.radius);
  if (in.height_is_present) {
    out.height = (denm_ts_StandardLength12b_t*) calloc(1, sizeof(denm_ts_StandardLength12b_t));
    toStruct_StandardLength12b(in.height, *out.height);
  }
}

}
