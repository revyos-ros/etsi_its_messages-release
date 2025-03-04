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
  asn1/raw/cam_en302637_2/CAM-PDU-Descriptions.asn \
  asn1/raw/cam_en302637_2/cdd/ITS-Container.asn \
  -t \
  cam \
  -o \
  etsi_its_conversion/etsi_its_cam_conversion/include/etsi_its_cam_conversion
----------------------------------------------------------------------------- */

/** ASN.1 Definition -----------------------------------------------------------
SpecialVehicleContainer ::= CHOICE {
	publicTransportContainer PublicTransportContainer,
	specialTransportContainer SpecialTransportContainer,
	dangerousGoodsContainer DangerousGoodsContainer,
	roadWorksContainerBasic RoadWorksContainerBasic,
	rescueContainer RescueContainer,
	emergencyContainer EmergencyContainer,
	safetyCarContainer SafetyCarContainer,
	...
}
----------------------------------------------------------------------------- */

#pragma once

#include <etsi_its_cam_coding/cam_SpecialVehicleContainer.h>
#include <etsi_its_cam_conversion/convertDangerousGoodsContainer.h>
#include <etsi_its_cam_conversion/convertEmergencyContainer.h>
#include <etsi_its_cam_conversion/convertPublicTransportContainer.h>
#include <etsi_its_cam_conversion/convertRescueContainer.h>
#include <etsi_its_cam_conversion/convertRoadWorksContainerBasic.h>
#include <etsi_its_cam_conversion/convertSafetyCarContainer.h>
#include <etsi_its_cam_conversion/convertSpecialTransportContainer.h>
#ifdef ROS1
#include <etsi_its_cam_msgs/SpecialVehicleContainer.h>
namespace cam_msgs = etsi_its_cam_msgs;
#else
#include <etsi_its_cam_msgs/msg/special_vehicle_container.hpp>
namespace cam_msgs = etsi_its_cam_msgs::msg;
#endif


namespace etsi_its_cam_conversion {

void toRos_SpecialVehicleContainer(const cam_SpecialVehicleContainer_t& in, cam_msgs::SpecialVehicleContainer& out) {
  switch (in.present) {
  case cam_SpecialVehicleContainer_PR_publicTransportContainer:
    toRos_PublicTransportContainer(in.choice.publicTransportContainer, out.public_transport_container);
    out.choice = cam_msgs::SpecialVehicleContainer::CHOICE_PUBLIC_TRANSPORT_CONTAINER;
    break;
  case cam_SpecialVehicleContainer_PR_specialTransportContainer:
    toRos_SpecialTransportContainer(in.choice.specialTransportContainer, out.special_transport_container);
    out.choice = cam_msgs::SpecialVehicleContainer::CHOICE_SPECIAL_TRANSPORT_CONTAINER;
    break;
  case cam_SpecialVehicleContainer_PR_dangerousGoodsContainer:
    toRos_DangerousGoodsContainer(in.choice.dangerousGoodsContainer, out.dangerous_goods_container);
    out.choice = cam_msgs::SpecialVehicleContainer::CHOICE_DANGEROUS_GOODS_CONTAINER;
    break;
  case cam_SpecialVehicleContainer_PR_roadWorksContainerBasic:
    toRos_RoadWorksContainerBasic(in.choice.roadWorksContainerBasic, out.road_works_container_basic);
    out.choice = cam_msgs::SpecialVehicleContainer::CHOICE_ROAD_WORKS_CONTAINER_BASIC;
    break;
  case cam_SpecialVehicleContainer_PR_rescueContainer:
    toRos_RescueContainer(in.choice.rescueContainer, out.rescue_container);
    out.choice = cam_msgs::SpecialVehicleContainer::CHOICE_RESCUE_CONTAINER;
    break;
  case cam_SpecialVehicleContainer_PR_emergencyContainer:
    toRos_EmergencyContainer(in.choice.emergencyContainer, out.emergency_container);
    out.choice = cam_msgs::SpecialVehicleContainer::CHOICE_EMERGENCY_CONTAINER;
    break;
  case cam_SpecialVehicleContainer_PR_safetyCarContainer:
    toRos_SafetyCarContainer(in.choice.safetyCarContainer, out.safety_car_container);
    out.choice = cam_msgs::SpecialVehicleContainer::CHOICE_SAFETY_CAR_CONTAINER;
    break;
  default: break;
  }
}

void toStruct_SpecialVehicleContainer(const cam_msgs::SpecialVehicleContainer& in, cam_SpecialVehicleContainer_t& out) {
  memset(&out, 0, sizeof(cam_SpecialVehicleContainer_t));
  switch (in.choice) {
  case cam_msgs::SpecialVehicleContainer::CHOICE_PUBLIC_TRANSPORT_CONTAINER:
    toStruct_PublicTransportContainer(in.public_transport_container, out.choice.publicTransportContainer);
    out.present = cam_SpecialVehicleContainer_PR::cam_SpecialVehicleContainer_PR_publicTransportContainer;
    break;
  case cam_msgs::SpecialVehicleContainer::CHOICE_SPECIAL_TRANSPORT_CONTAINER:
    toStruct_SpecialTransportContainer(in.special_transport_container, out.choice.specialTransportContainer);
    out.present = cam_SpecialVehicleContainer_PR::cam_SpecialVehicleContainer_PR_specialTransportContainer;
    break;
  case cam_msgs::SpecialVehicleContainer::CHOICE_DANGEROUS_GOODS_CONTAINER:
    toStruct_DangerousGoodsContainer(in.dangerous_goods_container, out.choice.dangerousGoodsContainer);
    out.present = cam_SpecialVehicleContainer_PR::cam_SpecialVehicleContainer_PR_dangerousGoodsContainer;
    break;
  case cam_msgs::SpecialVehicleContainer::CHOICE_ROAD_WORKS_CONTAINER_BASIC:
    toStruct_RoadWorksContainerBasic(in.road_works_container_basic, out.choice.roadWorksContainerBasic);
    out.present = cam_SpecialVehicleContainer_PR::cam_SpecialVehicleContainer_PR_roadWorksContainerBasic;
    break;
  case cam_msgs::SpecialVehicleContainer::CHOICE_RESCUE_CONTAINER:
    toStruct_RescueContainer(in.rescue_container, out.choice.rescueContainer);
    out.present = cam_SpecialVehicleContainer_PR::cam_SpecialVehicleContainer_PR_rescueContainer;
    break;
  case cam_msgs::SpecialVehicleContainer::CHOICE_EMERGENCY_CONTAINER:
    toStruct_EmergencyContainer(in.emergency_container, out.choice.emergencyContainer);
    out.present = cam_SpecialVehicleContainer_PR::cam_SpecialVehicleContainer_PR_emergencyContainer;
    break;
  case cam_msgs::SpecialVehicleContainer::CHOICE_SAFETY_CAR_CONTAINER:
    toStruct_SafetyCarContainer(in.safety_car_container, out.choice.safetyCarContainer);
    out.present = cam_SpecialVehicleContainer_PR::cam_SpecialVehicleContainer_PR_safetyCarContainer;
    break;
  default: break;
  }
}

}
