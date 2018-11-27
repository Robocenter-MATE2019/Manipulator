#pragma once
#include "LevelMotor.h"
class ROVBuilderManipulator
{
public:
	ROVBuilderManipulator(int8_t pin_release_left, int8_t pin_release_right,
		int8_t pin_rotate_left, int8_t pin_rotate_right):
		m_release_level_motor(pin_release_left, pin_release_right),
		m_rotate_level_motor(pin_rotate_left,pin_rotate_right)
	{
	}
	void init();
	void set_power(int8_t release, int8_t rotate);
	//~ROVManipulator();
private:
		LevelMotor m_release_level_motor;
		LevelMotor m_rotate_level_motor;
};

