#pragma once

#include <Geometry2d/Point.hpp>

class OurRobot;

// This class is responsible for everything stored in a RadioTx::Robot.
// Each robot has one.
class MotionControl
{
public:
	MotionControl(OurRobot *robot);
	
	void run();
	
private:
	void positionPD();
	void positionTrapezoidal();
	void anglePD();
	
	OurRobot *_robot;
	Geometry2d::Point _lastPosError;
	float _lastAngleError;
	Geometry2d::Point _worldVel;
	float _spin;
};