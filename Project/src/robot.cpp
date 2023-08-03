#include "api.h"
#include "robot.h"

/***********************************************************************************************

Here is where we actually code what each function does.

example function
returnType Classname::function(argument){
    code stuff here...
    return returnType;
}
************************************************************************************************/

//setup constructor robot
Robot::Robot()  
    : leftFront(FRONT_LEFT_PORT)    //setup motors
    , rightFront(FRONT_RIGHT_PORT, true)
    , leftBack(BACK_LEFT_PORT)
    , rightBack(BACK_RIGHT_PORT, true)
{}

//setup constructor 2 for robot
Robot::Robot(int d, int w, int l)
    : leftFront(FRONT_LEFT_PORT)    //setup motors
    , rightFront(FRONT_RIGHT_PORT, true)
    , leftBack(BACK_LEFT_PORT)
    , rightBack(BACK_RIGHT_PORT, true)
{
    wheel_diameter = d;
    width = w;
    length = l;
    circum = wheel_diameter * (3.14);
}

    /* ==========================================================================================
    Function set_wheel_diameter
    type: void
    name: set_wheel_diameter
    arguments: int size
    Description: Sets the wheel diameter and updates circum
    ===============================================================================================
    */
    void Robot::set_wheel_diameter(int size){
        wheel_diameter = size;
    }

      /*  =========================================================================================
      Function set_width
      type: void
      name: set_width
      arguments: int w
      Description: Sets the width of robot
      ===============================================================================================
      */

      /*  =====================================================================================
      Function set_length
      type: void
      name: set_length
      arguments: int l
      Description: Sets the lenth of robot
      ===============================================================================================
      */

      /* ==========================================================================================
      Function get_wheel_diameter
      type: int
      name: get_wheel_diameter
      arguments:
      Description: returns the wheel diameter
      ===============================================================================================
      */
    int Robot::get_wheel_diameter(){
        return wheel_diameter;
    }

      /*===========================================================================================
      Function get_length
      type: int
      name: get_length
      arguments:
      Description: returns the length
      ===============================================================================================
      */

      /* ===========================================================================================
      Function get_width
      type: int
      name: get_width
      arguments:
      Description: returns the width
      ===============================================================================================
      */

      /* ============================================================================================
      Function get_circum
      type: float
      name: get_circum
      arguments:
      Description: returns the circum
      ===============================================================================================
      */


      /*==============================================================================================
      Function moveForward
      type: void
      name:moveForward
      arguments: int
      Description: moves the robot forward at a set speed
      =====================================================================================================
      */
    void Robot::moveForward(int speed){
        leftFront.move(speed);
        rightFront.move(speed);
        leftBack.move(speed);
        rightBack.move(speed);
    }

      /*==============================================================================================
      Function turnRight
      type: void
      name:turnRight
      arguments: int
      Description: turns the robot right at a set speed
      =====================================================================================================
      */

      /*==============================================================================================
      Function turnLeft
      type: void
      name:turnRight
      arguments: int
      Description: turns the robot left at a set speed
      =====================================================================================================
      */

      /*==============================================================================================
      Function averageEncoders
      type: int
      name: averageEncoders
      arguments:
      Description: returns the average of all four encoders
      Hint use motor.get_position() to get the encoder values
      =====================================================================================================
      */

     /*==============================================================================================
      Function zeroDriveEncoders
      type: void
      name: zeroDriveEncoders
      arguments:
      Description: zeros the drive encoders
      Hint use motor.tare_position to reset the encoder values
      =====================================================================================================
      */

      /*==============================================================================================
      Function driveDistance
      type: void
      name: driveDistance
      arguments: int int
      Description: drives the robot a set distance and speed
      Hint use the previous two functions to more accurately drive the distance 
      =====================================================================================================
      */      
     
     /*==============================================================================================
      Function tankDrive
      type: void
      name: tankDrive
      arguments: int leftJoystick, int rightJoystick
      Description: set right motors to right joystick, sets left motors to left joystick
      =====================================================================================================
      */
     void Robot::tankDrive(int leftJoystick, int rightJoystick){
        leftFront.move(leftJoystick);
        rightFront.move(rightJoystick);
        leftBack.move(leftJoystick);
        rightBack.move(rightJoystick);
     }

     /*==============================================================================================
      Function diffDrive
      type: void
      name: diffDrive
      arguments: int joystickY, int joystickX
      Description: Mixes joystick x and y to drive motors with one joystick
      Hint: Combine the joysticks together using math drive motors properly
      =====================================================================================================
      */

