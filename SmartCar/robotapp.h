#ifndef ROBOT_APP
#define ROBOT_APP

#include "project.h"
#include "rs485client.h"
#include "lego-motor.h"
#include "lin-lego-motor-log.h"
#include "lego-sensor.h"
#include "imu.h"
#include "rf-cc1101.h"
#include "pwr-liion1a.h"
#include "lin-delay.h"
#include "TimeSupport.h"
#include <stdlib.h>
#include <pthread.h>
#include <stdbool.h>
#include "speaker.h"
#include "drive.h"
#include "lift.h"
#include "msgqueue.h"
#include "drivequeue.h"
#include "travel.h"
#include "dijkstra.h"
#include "map.h"
#include "restInterface.h"
#include "json.h"
#include "serversocket.h"
#include "moduleprocess.h"

#ifdef __cplusplus	//Check if the compiler is C++
    #include "camera.h"
    #include "smartcore.h"

	extern "C"	//Code needs to be handled as C-style code
	{
#endif

#define RS485_LEGO_MOTOR_ADDR 1
#define RS485_LEGO_SENSOR_ADDR 2
#define RS485_RF_ADDR 4
#define RS485_BAT_ADDR 3
#define RS485_IMU_ADDR 5

#define MOTOR_RIGHT 1
#define MOTOR_LEFT 2
#define MOTOR_LIFT 3

#define LSENSOR_RIGHT 1
#define LSENSOR_LEFT 2

#define SENSOR_LIFT 3

extern RS485ClientStruct RS485Client;
extern LegoMotorStruct LegoMotor;
extern LegoSensorStruct LegoSensor;
extern RfCC1101Struct RfCC1101;
extern PwrLiIon1AStruct PwrLiIion1A;
extern ImuStruct Imu;
extern socket_t TCP_TaskSocket;
extern socket_t TCP_EventSocket;

void RobotApp(int argc, char *argv[]);

#ifdef __cplusplus		//Check if the compiler is C++
	}		//End the extern "C" bracket
#endif

#endif
