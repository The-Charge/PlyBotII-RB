// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/AutonomousGroup.h"
#include "Commands/Drive.h"
#include "Commands/DriveTwoFeet.h"
#include "Commands/DriveXFeet.h"
#include "Commands/QuarterTurnClockwise.h"
#include "Commands/ResetGyro.h"
#include "Commands/TurnNDegrees.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	joystick1 = new Joystick(0);
	
	resetGyroB = new JoystickButton(joystick1, 7);
	resetGyroB->WhenPressed(new ResetGyro());
	quarterTurnB = new JoystickButton(joystick1, 2);
	quarterTurnB->WhenPressed(new QuarterTurnClockwise());
	quickDrive = new JoystickButton(joystick1, 1);
	quickDrive->WhenPressed(new DriveTwoFeet());
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

	SmartDashboard::PutData("Drive", new Drive());

	SmartDashboard::PutData("DriveTwoFeet", new DriveTwoFeet());

	SmartDashboard::PutData("QuarterTurnClockwise", new QuarterTurnClockwise());

	SmartDashboard::PutData("Autonomous Group", new AutonomousGroup());

	SmartDashboard::PutData("ResetGyro", new ResetGyro());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getJoystick1() {
	return joystick1;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
