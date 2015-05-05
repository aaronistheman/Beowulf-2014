/*
 * Delay.cpp
 *
 *  Created on: May 4, 2015
 *      Author: vandenrobotics
 */

#include "Delay.h"

Delay::Delay()
{
	shootTimer = new Timer;
}

void Delay::Initialize()
{
	shootTimer->Start();
}

void Delay::Execute()
{

}

bool Delay::IsFinished()
{
	return shootTimer->HasPeriodPassed(2.0);
}

void Delay::End()
{
	shootTimer->Stop();
	shootTimer->Reset();
}

void Delay::Interrupted()
{
	shootTimer->Stop();
	shootTimer->Reset();
}

