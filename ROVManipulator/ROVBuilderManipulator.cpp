#include "ROVBuilderManipulator.h"



/*ROVManipulator::ROVManipulator()
{
}*/


/*ROVManipulator::~ROVManipulator()
{
}*/

void ROVBuilderManipulator::init()
{
	m_release_level_motor.init();
	m_rotate_level_motor.init();
}

void ROVBuilderManipulator::set_power(int8_t release, int8_t rotate)
{
	m_release_level_motor.set_power(release);
	m_rotate_level_motor.set_power(rotate);
}
