#include <stdio.h>
#include "robot.h"

int main()
{
    Robot bot(10,10,15);
    bot.set_wheel_diameter(100);
    int value = bot.calculate_area();

    printf("Wheel Diameter %d\r\n", value);
}