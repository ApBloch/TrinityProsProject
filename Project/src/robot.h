#ifndef ROBOT_H_
#define ROBOT_H_

//to use this file copy < #include "robot.h" > to the top of main.cpp
#include "api.h"

//define Port numbers for the motors here so we can use them later
#define FRONT_LEFT_PORT 4
#define FRONT_RIGHT_PORT 5
#define BACK_LEFT_PORT 3
#define BACK_RIGHT_PORT 2
#define VISION_PORT 1

/*
=============================================================================
Creating a class

General Structure

class name
{
  private:        //private stuff can only be accessed inside the class ie the brackets
    int value;    //values that are specific to this object
    int value2;
  public:                 //public can be accessed anywhere
    name();               //constructor sets up how to call the object elsewhere in the code
    name(int x);          //another constructor
    name(int x, int y);   //another another constructor

    void function(int x);    //function with input int x
    int function();          //function that output a int

};   //notice the semicolon
=============================================================================
*/

class Robot{
    private:
        int wheel_diameter;
        int width;
        int length;
        float circum;

    public:
        Robot();
        Robot(int d, int w, int l);

        void set_wheel_diameter(int size);
        void set_width(int w);
        void set_length(int l);
        int get_wheel_diameter();
        void moveForward(int speed);

        void tankDrive(int leftJoystick, int rightJoystick);

        pros::Motor leftFront;
        pros::Motor rightFront;
        pros::Motor leftBack;
        pros::Motor rightBack;
};

#endif /* ROBOT_H_*/