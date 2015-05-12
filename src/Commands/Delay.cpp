/*
 * Delay.cpp
 *
 *  Created on: May 4, 2015
 *      Author: vandenrobotics
 */

#include "Delay.h"

Delay::Delay()
: timer()
{

}

void Delay::Initialize()
{
	timer.Start();
}

void Delay::Execute()
{

}

bool Delay::IsFinished()
{
	return timer.HasPeriodPassed(2.0);
}

void Delay::End()
{
	timer.Stop();
	timer.Reset();
}

void Delay::Interrupted()
{
	timer.Stop();
	timer.Reset();
}

