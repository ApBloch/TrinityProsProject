#include "main.h"   //must include main.h as the prototype for opcontrol is defined here!!
#include "robot.h"

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */

using namespace pros;

void opcontrol() {
	Robot bot;
	Controller controller(E_CONTROLLER_MASTER);
	while (true) {
		int joyRight = controller.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y);
		int joyLeft = controller.get_analog(E_CONTROLLER_ANALOG_LEFT_Y);
		bot.tankDrive(joyLeft, joyRight);
		delay(10);	//add small delay to slow update loop
	}
}