#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED


#include "stdio.h"
#include "stdlib.h"
#include "sdl.h"
#include "SDL2_gfxPrimitives.h"
#include "formulas.h"
#include "time.h"
#include "wall.h"
#include "math.h"

//Setup
void setup_robot(struct Robot *robot);

//Error/Finish Checking
int robot_off_screen(struct Robot * robot);
int checkRobotHitWall(struct Robot * robot, struct Wall * wall);
int checkRobotHitWalls(struct Robot * robot, struct Wall_collection * head);
int checkRobotReachedEnd(struct Robot * robot, int x, int y, int width, int height);
void robotCrash(struct Robot * robot);
void robotSuccess(struct Robot * robot, int msec);

//Sensor Checking
int checkRobotSensor(int x, int y, int sensorSensitivityLength, struct Wall * wall) ;
int checkRobotSensorFrontAllWalls(struct Robot * robot, struct Wall_collection * head);
int checkRobotSensorLeftAllWalls(struct Robot * robot, struct Wall_collection * head);
<<<<<<< HEAD
=======
int checkRobotSensorRightAllWalls(struct Robot * robot, struct Wall_collection * head);
>>>>>>> 967b50e3a7754014d5e9f72758bbd12d68515f56

//Visual Display
void robotUpdate(struct SDL_Renderer * renderer, struct Robot * robot);

//Movement
void robotMotorMove(struct Robot * robot);
<<<<<<< HEAD
void robotAutoMotorMove(struct Robot * robot, int left_sensor, int front_left_sensor);
=======
void robotAutoMotorMove(struct Robot * robot, int left_sensor, int front_sensor, int right_sensor);
>>>>>>> 967b50e3a7754014d5e9f72758bbd12d68515f56

#endif // ROBOT_H_INCLUDED
