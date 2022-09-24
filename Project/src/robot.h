#ifndef ROBOT_H_
#define ROBOT_H_

//to use this file copy < #include "robot.h" > to the top of main.cpp
#include "api.h"
//define Port numbers for the motors here so we can use them later
#define LEFT_FRONT 4
#define RIGHT_FRONT 5
#define LEFT_BACK 3
#define RIGHT_BACK 2
#define VISION_PORT 1

//if you want to use the same motors elsewhere in the project extern the motors
//extern means the variable/class is defined in another file in our calse "robot.cpp"
extern pros::Motor lFront;
extern pros::Motor rFront;
extern pros::Motor lBack;
extern pros::Motor rBack; 

//pros::ADIGyro gyro(1);

/*
=============================================================================
Creating a class

General Structure

class name
{
  private:        //private stuff can only be accessed inside the class ie the brackets
    int value;    //values that are specific to this object
    int value2;
  public:         //public can be accessed anywhere
    name(){}      //constructor sets up how to call the object elsewhere in the code
    name(int x): value(x){}                     //another constructor
    name(int x, int y): value(x), value2(y){}   //another another constructor

    void function(int x)    //function with input int x
    int function()          //function that output a int

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
};

#endif /* ROBOT_H_*/