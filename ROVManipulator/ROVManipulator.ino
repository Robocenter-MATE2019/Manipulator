/*
 Name:		ROVManipulator.ino
 Created:	26.11.2018 17:24:36
 Author:	User
*/
#include "ROVBuilderManipulator.h"
#include <stdint.h>
#include "LevelMotor.h"
int8_t get_power()
{ 
	char temp = Serial.read();
	if (temp == '0')
	{
	   return 0;
	}
	else if (temp == '1')
	{
		return 1;
	}
	else if (temp == '2')
	{
		return -1;
	}
}

ROVBuilderManipulator manipulator(4,5,6,7);
// the setup function runs once when you press reset or power the board
void setup() 
{
	Serial.begin(115200);
	manipulator.init();
}

int8_t release = 0;
int8_t rotate = 0;
// the loop function runs over and over again until power down or reset
void loop()
{
	

	if (Serial.available() > 1)
	{
		release = get_power();
		rotate = get_power();
	}
	manipulator.set_power(release, rotate);
}
