#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    rPot,           sensorPotentiometer)
#pragma config(Sensor, in2,    turningGyro,    sensorGyro)
#pragma config(Sensor, in3,    lineInnerL,     sensorLineFollower)
#pragma config(Sensor, in4,    lineInnerR,     sensorLineFollower)
#pragma config(Sensor, in5,    lineOuterL,     sensorLineFollower)
#pragma config(Sensor, in6,    lineOuterR,     sensorLineFollower)
#pragma config(Sensor, dgtl1,  sonicLeft,      sensorSONAR_mm)
#pragma config(Sensor, dgtl3,  sonicRight,     sensorSONAR_mm)
#pragma config(Sensor, I2C_1,  en1,            sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_2,  en2,            sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Motor,  port1,           leftLift3,     tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port2,           lDrive1,       tmotorVex393HighSpeed, openLoop)
#pragma config(Motor,  port3,           lDrive2,       tmotorVex393HighSpeed, openLoop, encoder, encoderPort, I2C_1, 1000)
#pragma config(Motor,  port4,           leftLift1,     tmotorVex393, openLoop)
#pragma config(Motor,  port5,           leftLift2,     tmotorVex393, openLoop)
#pragma config(Motor,  port6,           rightLift1,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port7,           rightLift2,    tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port8,           rDrive2,       tmotorVex393HighSpeed, openLoop, reversed, encoder, encoderPort, I2C_2, 1000)
#pragma config(Motor,  port9,           rDrive1,       tmotorVex393HighSpeed, openLoop, reversed)
#pragma config(Motor,  port10,          rightLift3,    tmotorVex393, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

// Include headers
#include "/headers/definitions.h"

#include "/headers/main.h"

#include "/headers/variables.h"

// Include files
#include "Vex_Competition_Includes.c" // Do not modify

#include "/files/preauton.c"

#include "/files/autonomous.c"

#include "/files/usercontrol.c"
