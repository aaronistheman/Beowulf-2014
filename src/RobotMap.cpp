// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
CANJaguar* RobotMap::armarmA = NULL;
CANJaguar* RobotMap::armarmB = NULL;
CANJaguar* RobotMap::chassisfrontLeft = NULL;
CANJaguar* RobotMap::chassisfrontRight = NULL;
CANJaguar* RobotMap::chassisbackLeft = NULL;
CANJaguar* RobotMap::chassisbackRight = NULL;
CANJaguar* RobotMap::conveyorconveyor = NULL;
DoubleSolenoid* RobotMap::conveyorstopper = NULL;
CANJaguar* RobotMap::intakeintake = NULL;
DoubleSolenoid* RobotMap::intakespoiler = NULL;
DigitalInput* RobotMap::sensorslightSensor = NULL;
DoubleSolenoid* RobotMap::shiftershifter = NULL;
CANJaguar* RobotMap::shootershooterA = NULL;
CANJaguar* RobotMap::shootershooterB = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	armarmA = new CANJaguar(9);
	
	
	armarmB = new CANJaguar(10);
	
	
	chassisfrontLeft = new CANJaguar(2);
	
	
	chassisfrontRight = new CANJaguar(4);
	
	
	chassisbackLeft = new CANJaguar(3);
	
	
	chassisbackRight = new CANJaguar(5);
	
	
	conveyorconveyor = new CANJaguar(12);
	
	
	conveyorstopper = new DoubleSolenoid(0, 6, 1);      
	lw->AddActuator("Conveyor", "stopper", conveyorstopper);
	
	intakeintake = new CANJaguar(11);
	
	
	intakespoiler = new DoubleSolenoid(0, 5, 2);      
	lw->AddActuator("Intake", "spoiler", intakespoiler);
	
	sensorslightSensor = new DigitalInput(8);
	lw->AddSensor("Sensors", "lightSensor", sensorslightSensor);
	
	shiftershifter = new DoubleSolenoid(0, 3, 4);      
	lw->AddActuator("Shifter", "shifter", shiftershifter);
	
	shootershooterA = new CANJaguar(7);
	
	
	shootershooterB = new CANJaguar(8);
	
	


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
