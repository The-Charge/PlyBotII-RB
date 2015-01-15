// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "QuarterTurnClockwise.h"

QuarterTurnClockwise::QuarterTurnClockwise() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void QuarterTurnClockwise::Initialize() {
	 StartAngle = Robot::driveTrain->driveGyro->GetAngle(); // saves the current angle for comparing with wanted position
	}

// Called repeatedly when this Command is scheduled to run
void QuarterTurnClockwise::Execute() {
	Robot::driveTrain->drive(0,0,.25);
	
}

// Make this return true when this Command no longer needs to run execute()
bool QuarterTurnClockwise::IsFinished() {
	int Angle = Robot::driveTrain->driveGyro->GetAngle();//gets angle

	if(Angle >= StartAngle + 90){//checks angle to see if in the right position by comparing it to StartAngle
		return true;
	}
	return false;
}

// Called once after isFinished returns true
void QuarterTurnClockwise::End() {
	Robot::driveTrain->drive(0,0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void QuarterTurnClockwise::Interrupted() {
	Robot::driveTrain->drive(0,0,0);
}
