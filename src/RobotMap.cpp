// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveTrainLeftFrontMotor = NULL;
SpeedController* RobotMap::driveTrainLeftRearMotor = NULL;
SpeedController* RobotMap::driveTrainRightFrontMotor = NULL;
SpeedController* RobotMap::driveTrainRightRearMotor = NULL;
RobotDrive* RobotMap::driveTrainRobotDrive41 = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveTrainLeftFrontMotor = new TalonSRX(0);
	lw->AddActuator("DriveTrain", "LeftFrontMotor", (TalonSRX*) driveTrainLeftFrontMotor);
	
	driveTrainLeftRearMotor = new Talon(1);
	lw->AddActuator("DriveTrain", "LeftRearMotor", (Talon*) driveTrainLeftRearMotor);
	
	driveTrainRightFrontMotor = new Talon(2);
	lw->AddActuator("DriveTrain", "RightFrontMotor", (Talon*) driveTrainRightFrontMotor);
	
	driveTrainRightRearMotor = new Talon(3);
	lw->AddActuator("DriveTrain", "RightRearMotor", (Talon*) driveTrainRightRearMotor);
	
	driveTrainRobotDrive41 = new RobotDrive(driveTrainLeftFrontMotor, driveTrainLeftRearMotor,
              driveTrainRightFrontMotor, driveTrainRightRearMotor);
	
	driveTrainRobotDrive41->SetSafetyEnabled(true);
        driveTrainRobotDrive41->SetExpiration(0.1);
        driveTrainRobotDrive41->SetSensitivity(0.5);
        driveTrainRobotDrive41->SetMaxOutput(1.0);

        driveTrainRobotDrive41->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        driveTrainRobotDrive41->SetInvertedMotor(RobotDrive::kRearRightMotor, true);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
