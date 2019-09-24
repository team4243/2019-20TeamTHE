#pragma once

#ifndef _H_
#define _H_

/*************************************************************************************************/
/**** Gamepad Joystick Definitions for Buttons and Axis' ****/

/// Joystick Buttons
//X Box
#define BUTTON_GREEN (1)
#define BUTTON_RED (2)
#define BUTTON_BLUE (3)
#define BUTTON_YELLOW (4)
//Play Station
#define BUTTON_SQUARE (1)
#define BUTTON_CROSS (2)
#define BUTTON_CIRCLE (3)
#define BUTTON_TRIANGLE (4)

//X Box
#define BUTTON_BUMPER_LEFT (5)
#define BUTTON_BUMPER_RIGHT (6)
//Play Station
#define BUTTON_L1 (5)
#define BUTTON_R1 (6)
#define BUTTON_L2 (7)
#define BUTTON_R2 (8)

//X Box
#define BUTTON_BACK (7)
#define BUTTON_START (8)
//Play Station
#define BUTTON_SHARE (9)
#define BUTTON_OPTIONS (10)
#define BUTTON_PS (13)
#define BUTTON_TOUCHPAD (14)

//X Box
#define BUTTON_LEFT_STICK_PRESS (9)
#define BUTTON_RIGHT_STICK_PRESS (10)
//Play Station
#define BUTTON_L3 (11)
#define BUTTON_R3 (12)

// Joystick Directional Pad use POV()

/// Joystick Triggers
//X Box
#define AXIS_LEFT_TRIGGER (2)  // 0 to 1
#define AXIS_RIGHT_TRIGGER (3) // 0 to 1
//Play Station
#define AXIS_L2 (3)
#define AXIS_R2 (4)

/// Joystick Wheels
//X Box
#define AXIS_LEFT_X (0)
#define AXIS_LEFT_Y (1)
//Play Station
#define AXIS_L3_X (0)
#define AXIS_L3_Y (1)

//X Box
#define AXIS_RIGHT_X (4)
#define AXIS_RIGHT_Y (5)
//Play Station
#define AXIS_R3_X (2)
#define AXIS_R3_Y (5)
#endif