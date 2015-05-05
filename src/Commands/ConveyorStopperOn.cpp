
#include "ConveyorStopperOn.h"

ConveyorStopperOn::ConveyorStopperOn() {
	Requires(Robot::conveyor);
}

void ConveyorStopperOn::Initialize() {
	Robot::conveyor->stopper->Set(DoubleSolenoid::kForward);
}

void ConveyorStopperOn::Execute() {
	Robot::conveyor->conveyor->Set(-1.0);
}

bool ConveyorStopperOn::IsFinished() {
	return false;
}

void ConveyorStopperOn::End() {
	Robot::conveyor->stopper->Set(DoubleSolenoid::kReverse);
}

void ConveyorStopperOn::Interrupted() {
	Robot::conveyor->stopper->Set(DoubleSolenoid::kReverse);
}
