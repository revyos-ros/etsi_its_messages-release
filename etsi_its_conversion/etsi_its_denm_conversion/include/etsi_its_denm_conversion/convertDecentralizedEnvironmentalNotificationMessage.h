/** ============================================================================
MIT License

Copyright (c) 2023 Institute for Automotive Engineering (ika), RWTH Aachen University

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

#include <etsi_its_denm_coding/DecentralizedEnvironmentalNotificationMessage.h>
#include <etsi_its_denm_conversion/convertManagementContainer.h>
#include <etsi_its_denm_conversion/convertSituationContainer.h>
#include <etsi_its_denm_conversion/convertLocationContainer.h>
#include <etsi_its_denm_conversion/convertAlacarteContainer.h>
#ifdef ROS1
#include <etsi_its_denm_msgs/DecentralizedEnvironmentalNotificationMessage.h>
namespace denm_msgs = etsi_its_denm_msgs;
#else
#include <etsi_its_denm_msgs/msg/decentralized_environmental_notification_message.hpp>
namespace denm_msgs = etsi_its_denm_msgs::msg;
#endif


namespace etsi_its_denm_conversion {

void toRos_DecentralizedEnvironmentalNotificationMessage(const DecentralizedEnvironmentalNotificationMessage_t& in, denm_msgs::DecentralizedEnvironmentalNotificationMessage& out) {

  toRos_ManagementContainer(in.management, out.management);
  if (in.situation) {
    toRos_SituationContainer(*in.situation, out.situation);
    out.situation_is_present = true;
  }

  if (in.location) {
    toRos_LocationContainer(*in.location, out.location);
    out.location_is_present = true;
  }

  if (in.alacarte) {
    toRos_AlacarteContainer(*in.alacarte, out.alacarte);
    out.alacarte_is_present = true;
  }

}

void toStruct_DecentralizedEnvironmentalNotificationMessage(const denm_msgs::DecentralizedEnvironmentalNotificationMessage& in, DecentralizedEnvironmentalNotificationMessage_t& out) {

  memset(&out, 0, sizeof(DecentralizedEnvironmentalNotificationMessage_t));

  toStruct_ManagementContainer(in.management, out.management);
  if (in.situation_is_present) {
    SituationContainer_t situation;
    toStruct_SituationContainer(in.situation, situation);
    out.situation = new SituationContainer_t(situation);
  }

  if (in.location_is_present) {
    LocationContainer_t location;
    toStruct_LocationContainer(in.location, location);
    out.location = new LocationContainer_t(location);
  }

  if (in.alacarte_is_present) {
    AlacarteContainer_t alacarte;
    toStruct_AlacarteContainer(in.alacarte, alacarte);
    out.alacarte = new AlacarteContainer_t(alacarte);
  }

}

}