/*
 * autoShoot.cpp
 *
 *  Created on: May 4, 2015
 *      Author: vandenrobotics
 */

#include "autoShoot.h"
#include "ShooterOn.h"
#include "ConveyorStopperOn.h"
#include "Delay.h"

AutoShoot::AutoShoot()
{
	AddParallel(new ShooterOn());
	AddSequential(new Delay());
	AddSequential(new ConveyorStopperOn());
}

