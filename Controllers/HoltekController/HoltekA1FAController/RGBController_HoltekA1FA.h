/*---------------------------------------------------------*\
| RGBController_HoltekA1FA.h                                |
|                                                           |
|   RGBController for Holtek mousemat                       |
|                                                           |
|   Edoardo Ridolfi (edo2313)                   26 Dec 2020 |
|                                                           |
|   This file is part of the OpenRGB project                |
|   SPDX-License-Identifier: GPL-2.0-only                   |
\*---------------------------------------------------------*/

#pragma once

#include "RGBController.h"
#include "HoltekA1FAController.h"

class RGBController_HoltekA1FA : public RGBController
{
public:
    RGBController_HoltekA1FA(HoltekA1FAController* controller_ptr);
    ~RGBController_HoltekA1FA();

    int         previous_mode = 0;  /* previous  mode              */

    void        SetupZones();
    void        ResizeZone(int zone, int new_size);

    void        DeviceUpdateLEDs();
    void        UpdateZoneLEDs(int zone);
    void        UpdateSingleLED(int led);

    void        DeviceUpdateMode();

private:
    HoltekA1FAController* controller;
};
