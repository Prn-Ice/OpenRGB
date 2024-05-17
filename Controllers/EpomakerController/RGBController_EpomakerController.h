/*---------------------------------------------------------*\
| RGBController_EpomakerController.h                        |
|                                                           |
|   RGBController for Epomaker keyboard                     |
|                                                           |
|   Alvaro Munoz (alvaromunoz)                  05 Jun 2023 |
|                                                           |
|   This file is part of the OpenRGB project                |
|   SPDX-License-Identifier: GPL-2.0-only                   |
\*---------------------------------------------------------*/

#pragma once

#include "RGBController.h"
#include "EpomakerController.h"

class RGBController_EpomakerController : public RGBController
{
public:
    RGBController_EpomakerController(EpomakerController* controller_ptr);
    ~RGBController_EpomakerController();


    void        SetupZones();
    void        ResizeZone(int zone, int new_size);

    void        DeviceUpdateLEDs();
    void        UpdateZoneLEDs(int zone);
    void        UpdateSingleLED(int led);

    void        DeviceUpdateMode();

private:
    EpomakerController* controller;
};
