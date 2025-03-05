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
 * This DF provides the definition of a geographical area or volume, based on different options.
 *
 * It is a choice of the following components: 
 *
 * @field rectangular: definition of an rectangular area or a right rectangular prism (with a rectangular base) also called a cuboid, or informally a rectangular box.
 *
 * @field circular: definition of an area of circular shape or a right circular cylinder.
 *
 * @field polygonal: definition of an area of polygonal shape or a right prism.
 *
 * @field elliptical: definition of an area of elliptical shape or a right elliptical cylinder.
 *
 * @field radial: definition of a radial shape.
 *
 * @field radialList: definition of list of radial shapes.
 *
 * @category: GeoReference information
 * @revision: Created in V2.1.1
 *
Shape::= CHOICE {
   rectangular       RectangularShape,
   circular          CircularShape, 
   polygonal         PolygonalShape,
   elliptical        EllipticalShape,
   radial            RadialShape,
   radialShapes      RadialShapes,
   ...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_denm_ts_coding/denm_ts_Shape.h>
#include <etsi_its_denm_ts_conversion/convertCircularShape.h>
#include <etsi_its_denm_ts_conversion/convertEllipticalShape.h>
#include <etsi_its_denm_ts_conversion/convertPolygonalShape.h>
#include <etsi_its_denm_ts_conversion/convertRadialShape.h>
#include <etsi_its_denm_ts_conversion/convertRadialShapes.h>
#include <etsi_its_denm_ts_conversion/convertRectangularShape.h>
#ifdef ROS1
#include <etsi_its_denm_ts_msgs/Shape.h>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs;
#else
#include <etsi_its_denm_ts_msgs/msg/shape.hpp>
namespace denm_ts_msgs = etsi_its_denm_ts_msgs::msg;
#endif


namespace etsi_its_denm_ts_conversion {

void toRos_Shape(const denm_ts_Shape_t& in, denm_ts_msgs::Shape& out) {
  switch (in.present) {
  case denm_ts_Shape_PR_rectangular:
    toRos_RectangularShape(in.choice.rectangular, out.rectangular);
    out.choice = denm_ts_msgs::Shape::CHOICE_RECTANGULAR;
    break;
  case denm_ts_Shape_PR_circular:
    toRos_CircularShape(in.choice.circular, out.circular);
    out.choice = denm_ts_msgs::Shape::CHOICE_CIRCULAR;
    break;
  case denm_ts_Shape_PR_polygonal:
    toRos_PolygonalShape(in.choice.polygonal, out.polygonal);
    out.choice = denm_ts_msgs::Shape::CHOICE_POLYGONAL;
    break;
  case denm_ts_Shape_PR_elliptical:
    toRos_EllipticalShape(in.choice.elliptical, out.elliptical);
    out.choice = denm_ts_msgs::Shape::CHOICE_ELLIPTICAL;
    break;
  case denm_ts_Shape_PR_radial:
    toRos_RadialShape(in.choice.radial, out.radial);
    out.choice = denm_ts_msgs::Shape::CHOICE_RADIAL;
    break;
  case denm_ts_Shape_PR_radialShapes:
    toRos_RadialShapes(in.choice.radialShapes, out.radial_shapes);
    out.choice = denm_ts_msgs::Shape::CHOICE_RADIAL_SHAPES;
    break;
  default: break;
  }
}

void toStruct_Shape(const denm_ts_msgs::Shape& in, denm_ts_Shape_t& out) {
  memset(&out, 0, sizeof(denm_ts_Shape_t));
  switch (in.choice) {
  case denm_ts_msgs::Shape::CHOICE_RECTANGULAR:
    toStruct_RectangularShape(in.rectangular, out.choice.rectangular);
    out.present = denm_ts_Shape_PR::denm_ts_Shape_PR_rectangular;
    break;
  case denm_ts_msgs::Shape::CHOICE_CIRCULAR:
    toStruct_CircularShape(in.circular, out.choice.circular);
    out.present = denm_ts_Shape_PR::denm_ts_Shape_PR_circular;
    break;
  case denm_ts_msgs::Shape::CHOICE_POLYGONAL:
    toStruct_PolygonalShape(in.polygonal, out.choice.polygonal);
    out.present = denm_ts_Shape_PR::denm_ts_Shape_PR_polygonal;
    break;
  case denm_ts_msgs::Shape::CHOICE_ELLIPTICAL:
    toStruct_EllipticalShape(in.elliptical, out.choice.elliptical);
    out.present = denm_ts_Shape_PR::denm_ts_Shape_PR_elliptical;
    break;
  case denm_ts_msgs::Shape::CHOICE_RADIAL:
    toStruct_RadialShape(in.radial, out.choice.radial);
    out.present = denm_ts_Shape_PR::denm_ts_Shape_PR_radial;
    break;
  case denm_ts_msgs::Shape::CHOICE_RADIAL_SHAPES:
    toStruct_RadialShapes(in.radial_shapes, out.choice.radialShapes);
    out.present = denm_ts_Shape_PR::denm_ts_Shape_PR_radialShapes;
    break;
  default: break;
  }
}

}
