// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/ArmOff.h"
#include "Commands/ArmOn.h"
#include "Commands/ArmReverse.h"
#include "Commands/AutonomousCommands.h"
#include "Commands/ConveyorOff.h"
#include "Commands/ConveyorOn.h"
#include "Commands/ConveyorReverse.h"
#include "Commands/IntakeOff.h"
#include "Commands/IntakeOn.h"
#include "Commands/IntakeReverse.h"
#include "Commands/IntakeSwitch.h"
#include "Commands/SensorsDetectFrisbee.h"
#include "Commands/Shift.h"
#include "Commands/ShooterOff.h"
#include "Commands/ShooterOn.h"
#include "Commands/StopperSwitch.h"
#include "Commands/TankDrive.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	coDriver = new Joystick(1);
	
	cButtonB = new JoystickButton(coDriver, 2);
	cButtonB->WhileHeld(new ArmReverse());
	cButtonY = new JoystickButton(coDriver, 4);
	cButtonY->WhileHeld(new ArmOn());
	cRightBumper = new JoystickButton(coDriver, 6);
	cRightBumper->WhileHeld(new ShooterOn());
	cButton8 = new JoystickButton(coDriver, 8);
	cButton8->WhileHeld(new ConveyorReverse());
	cButton7 = new JoystickButton(coDriver, 7);
	cButton7->WhileHeld(new IntakeReverse());
	cLeftBumper = new JoystickButton(coDriver, 5);
	cLeftBumper->WhenReleased(new StopperSwitch());
	
	driver = new Joystick(0);

	dButton8 = new JoystickButton(driver, 8);
	dButton8->WhileHeld(new ConveyorReverse());
	dButton7 = new JoystickButton(driver, 7);
	dButton7->WhileHeld(new IntakeReverse());
	dRightStick = new JoystickButton(driver, 10);
	dRightStick->WhenReleased(new IntakeSwitch());
	dButtonB = new JoystickButton(driver, 2);
	dButtonB->WhileHeld(new ArmReverse());
	dButtonY = new JoystickButton(driver, 4);
	dButtonY->WhileHeld(new ArmOn());
	dButtonA = new JoystickButton(driver, 1);
	dButtonA->WhileHeld(new IntakeOn());
	dButtonX = new JoystickButton(driver, 3);
	dButtonX->WhileHeld(new ConveyorOn());
	dRightBumper = new JoystickButton(driver, 6);
	dRightBumper->WhileHeld(new ShooterOn());
	dLeftStick = new JoystickButton(driver, 9);
	dLeftStick->WhenReleased(new Shift());
	dLeftBumper = new JoystickButton(driver, 5);
	dLeftBumper->WhenReleased(new StopperSwitch());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("IntakeOn", new IntakeOn());
	SmartDashboard::PutData("IntakeOff", new IntakeOff());
	SmartDashboard::PutData("ConveyorOn", new ConveyorOn());
	SmartDashboard::PutData("ConveyorOff", new ConveyorOff());
	SmartDashboard::PutData("ShooterOn", new ShooterOn());
	SmartDashboard::PutData("ShooterOff", new ShooterOff());
	SmartDashboard::PutData("TankDrive", new TankDrive());
	SmartDashboard::PutData("AutonomousCommands", new AutonomousCommands());
	SmartDashboard::PutData("Shift", new Shift());
	SmartDashboard::PutData("ArmOff", new ArmOff());
	SmartDashboard::PutData("ArmOn", new ArmOn());
	SmartDashboard::PutData("ArmReverse", new ArmReverse());
	SmartDashboard::PutData("SensorsDetectFrisbee", new SensorsDetectFrisbee());
	SmartDashboard::PutData("IntakeSwitch", new IntakeSwitch());
	SmartDashboard::PutData("StopperSwitch", new StopperSwitch());
	SmartDashboard::PutData("IntakeReverse", new IntakeReverse());
	SmartDashboard::PutData("ConveyorReverse", new ConveyorReverse());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getCoDriver() {
	return coDriver;
}
Joystick* OI::getDriver() {
	return driver;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
