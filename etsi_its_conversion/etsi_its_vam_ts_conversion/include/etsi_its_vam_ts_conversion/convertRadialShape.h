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
  asn1/raw/vam-ts103300_3/VAM-PDU-Descriptions.asn \
  asn1/patched/vam-ts103300_3/cdd/ETSI-ITS-CDD.asn \
  -t \
  vam_ts \
  -o \
  etsi_its_conversion/etsi_its_vam_ts_conversion/include/etsi_its_vam_ts_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
*
 * This DF describes a radial shape. The triangular or cone-shaped volume is
 * constructed by sweeping the provided range about the reference point  between a horizontal start 
 * and a horizontal end angle in positive angular direction of the WGS84
 * coordinate system. A vertical opening angle may be provided in a Cartesian coordinate system with
 * the x-axis located in the North-East plane of the WGS84 coordinate system. The sensor height may
 * be provided to reflect characteristics of sensors mounted at an altitude (e.g. sensors mounted
 * above intersections).
 *
 * It shall include the following components:
 * 
 * @field shapeReferencePoint: the optional reference point used for the definition of the shape, relative to an externally specified reference position. 
 * If this component is absent, the externally specified reference position represents the shape's  reference point. 
 *
 * @field range: the radial range of the shape from the shape's reference point. 
 *
 * @field stationaryHorizontalOpeningAngleStart:  the orientation indicating the beginning of the 
 * shape's horizontal opening angle in positive angular direction with respect to the 
 * WGS84 coordinate system.
 *
 * @field stationaryHorizontalOpeningAngleEnd: The orientation indicating the end of the shape's 
 * horizontal opening angle in positive angular direction with respect to the WGS84 coordinate system.
 *
 * @field verticalOpeningAngleStart: optional orientation indicating the beginning of the shape's
 * opening angle in positive angular direction of a Cartesian coordinate system with its x-axis 
 * located in the north-east plane of the WGS84 coordinate system.
 *
 * @field verticalOpeningAngleEnd: optional orientation indicating the end of the shape's 
 * vertical opening angle in positive angular direction of a Cartesian coordinate system with its x-axis 
 * located in the north-east plane of the WGS84 coordinate system. 
 *
 * @category GeoReference information
 * @revision: created in V2.1.1
*
RadialShape ::= SEQUENCE { 
    shapeReferencePoint                      CartesianPosition3d OPTIONAL,
    range                                    StandardLength12b,
    stationaryHorizontalOpeningAngleStart    Wgs84AngleValue, 
    stationaryHorizontalOpeningAngleEnd      Wgs84AngleValue, 
    verticalOpeningAngleStart                CartesianAngleValue OPTIONAL,
    verticalOpeningAngleEnd                  CartesianAngleValue OPTIONAL
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_vam_ts_coding/vam_ts_RadialShape.h>
#include <etsi_its_vam_ts_conversion/convertCartesianAngleValue.h>
#include <etsi_its_vam_ts_conversion/convertCartesianPosition3d.h>
#include <etsi_its_vam_ts_conversion/convertStandardLength12b.h>
#include <etsi_its_vam_ts_conversion/convertWgs84AngleValue.h>
#ifdef ROS1
#include <etsi_its_vam_ts_msgs/RadialShape.h>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs;
#else
#include <etsi_its_vam_ts_msgs/msg/radial_shape.hpp>
namespace vam_ts_msgs = etsi_its_vam_ts_msgs::msg;
#endif


namespace etsi_its_vam_ts_conversion {

void toRos_RadialShape(const vam_ts_RadialShape_t& in, vam_ts_msgs::RadialShape& out) {
  if (in.shapeReferencePoint) {
    toRos_CartesianPosition3d(*in.shapeReferencePoint, out.shape_reference_point);
    out.shape_reference_point_is_present = true;
  }
  toRos_StandardLength12b(in.range, out.range);
  toRos_Wgs84AngleValue(in.stationaryHorizontalOpeningAngleStart, out.stationary_horizontal_opening_angle_start);
  toRos_Wgs84AngleValue(in.stationaryHorizontalOpeningAngleEnd, out.stationary_horizontal_opening_angle_end);
  if (in.verticalOpeningAngleStart) {
    toRos_CartesianAngleValue(*in.verticalOpeningAngleStart, out.vertical_opening_angle_start);
    out.vertical_opening_angle_start_is_present = true;
  }
  if (in.verticalOpeningAngleEnd) {
    toRos_CartesianAngleValue(*in.verticalOpeningAngleEnd, out.vertical_opening_angle_end);
    out.vertical_opening_angle_end_is_present = true;
  }
}

void toStruct_RadialShape(const vam_ts_msgs::RadialShape& in, vam_ts_RadialShape_t& out) {
  memset(&out, 0, sizeof(vam_ts_RadialShape_t));
  if (in.shape_reference_point_is_present) {
    out.shapeReferencePoint = (vam_ts_CartesianPosition3d_t*) calloc(1, sizeof(vam_ts_CartesianPosition3d_t));
    toStruct_CartesianPosition3d(in.shape_reference_point, *out.shapeReferencePoint);
  }
  toStruct_StandardLength12b(in.range, out.range);
  toStruct_Wgs84AngleValue(in.stationary_horizontal_opening_angle_start, out.stationaryHorizontalOpeningAngleStart);
  toStruct_Wgs84AngleValue(in.stationary_horizontal_opening_angle_end, out.stationaryHorizontalOpeningAngleEnd);
  if (in.vertical_opening_angle_start_is_present) {
    out.verticalOpeningAngleStart = (vam_ts_CartesianAngleValue_t*) calloc(1, sizeof(vam_ts_CartesianAngleValue_t));
    toStruct_CartesianAngleValue(in.vertical_opening_angle_start, *out.verticalOpeningAngleStart);
  }
  if (in.vertical_opening_angle_end_is_present) {
    out.verticalOpeningAngleEnd = (vam_ts_CartesianAngleValue_t*) calloc(1, sizeof(vam_ts_CartesianAngleValue_t));
    toStruct_CartesianAngleValue(in.vertical_opening_angle_end, *out.verticalOpeningAngleEnd);
  }
}

}
