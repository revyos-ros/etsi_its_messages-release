/** ============================================================================
MIT License

Copyright (c) 2023-2024 Institute for Automotive Engineering (ika), RWTH Aachen University
Copyright (c) 2024 Instituto de Telecomunicações, Universidade de Aveiro

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

// --- Auto-generated by asn1ToConversionHeader.py -----------------------------

#pragma once

#include <etsi_its_cam_ts_coding/cam_ts_IntersectionReferenceId.h>
#include <etsi_its_cam_ts_conversion/convertIdentifier2B.h>
#ifdef ROS1
#include <etsi_its_cam_ts_msgs/IntersectionReferenceId.h>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs;
#else
#include <etsi_its_cam_ts_msgs/msg/intersection_reference_id.hpp>
namespace cam_ts_msgs = etsi_its_cam_ts_msgs::msg;
#endif


namespace etsi_its_cam_ts_conversion {

void toRos_IntersectionReferenceId(const cam_ts_IntersectionReferenceId_t& in, cam_ts_msgs::IntersectionReferenceId& out) {
  if (in.region) {
    toRos_Identifier2B(*in.region, out.region);
    out.region_is_present = true;
  }
  toRos_Identifier2B(in.id, out.id);
}

void toStruct_IntersectionReferenceId(const cam_ts_msgs::IntersectionReferenceId& in, cam_ts_IntersectionReferenceId_t& out) {
  memset(&out, 0, sizeof(cam_ts_IntersectionReferenceId_t));

  if (in.region_is_present) {
    out.region = (cam_ts_Identifier2B_t*) calloc(1, sizeof(cam_ts_Identifier2B_t));
    toStruct_Identifier2B(in.region, *out.region);
  }
  toStruct_Identifier2B(in.id, out.id);
}

}
