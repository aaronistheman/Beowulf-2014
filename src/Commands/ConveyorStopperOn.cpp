
#include "ConveyorStopperOn.h"

ConveyorStopperOn::ConveyorStopperOn()
: timer()
{
	Requires(Robot::conveyor);
	Requires(Robot::shooter);
	Requires(Robot::intake);
}

void ConveyorStopperOn::Initialize() {
	timer->Start();
	Robot::conveyor->stopper->Set(DoubleSolenoid::kForward);
}

void ConveyorStopperOn::Execute() {
	Robot::shooter->shooterA->Set(1.0);
	Robot::shooter->shooterB->Set(1.0);
	if(timer->HasPeriodPassed(2.0))
	{
		Robot::conveyor->conveyor->Set(-1.0);
		Robot::intake->intake->Set(-1.0);
	}
	else
	{
		Robot::conveyor->conveyor->Set(0.0);
		Robot::intake->intake->Set(0.0);
	}
}

bool ConveyorStopperOn::IsFinished() {
	return false;
}

void ConveyorStopperOn::End() {
	timer->Stop();
	timer->Reset();
	Robot::conveyor->stopper->Set(DoubleSolenoid::kReverse);
}

void ConveyorStopperOn::Interrupted() {
	timer->Stop();
	timer->Reset();
	Robot::conveyor->stopper->Set(DoubleSolenoid::kReverse);
}
