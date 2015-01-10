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
SpeedController* RobotMap::driveTrainLeftRearMotor = NULL;
SpeedController* RobotMap::driveTrainLeftFrontMotor = NULL;
SpeedController* RobotMap::driveTrainRightRearMotor = NULL;
SpeedController* RobotMap::driveTrainRightFrontMotor = NULL;
RobotDrive* RobotMap::driveTrainRobotDrive41 = NULL;
Gyro* RobotMap::driveTrainDriveTrainGyro = NULL;
Encoder* RobotMap::driveTrainLeftRearEncoder = NULL;
Encoder* RobotMap::driveTrainLeftFrontEncoder = NULL;
Encoder* RobotMap::driveTrainRightRearEncoder = NULL;
Encoder* RobotMap::driveTrainRightFrontEncoder = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveTrainLeftRearMotor = new TalonSRX(1);
	lw->AddActuator("DriveTrain", "LeftRearMotor", (TalonSRX*) driveTrainLeftRearMotor);
	
	driveTrainLeftFrontMotor = new TalonSRX(0);
	lw->AddActuator("DriveTrain", "LeftFrontMotor", (TalonSRX*) driveTrainLeftFrontMotor);
	
	driveTrainRightRearMotor = new TalonSRX(3);
	lw->AddActuator("DriveTrain", "RightRearMotor", (TalonSRX*) driveTrainRightRearMotor);
	
	driveTrainRightFrontMotor = new TalonSRX(2);
	lw->AddActuator("DriveTrain", "RightFrontMotor", (TalonSRX*) driveTrainRightFrontMotor);
	
	driveTrainRobotDrive41 = new RobotDrive(driveTrainLeftFrontMotor, driveTrainLeftRearMotor,
              driveTrainRightFrontMotor, driveTrainRightRearMotor);
	
	driveTrainRobotDrive41->SetSafetyEnabled(true);
        driveTrainRobotDrive41->SetExpiration(0.1);
        driveTrainRobotDrive41->SetSensitivity(0.5);
        driveTrainRobotDrive41->SetMaxOutput(1.0);

        driveTrainRobotDrive41->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        driveTrainRobotDrive41->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	driveTrainDriveTrainGyro = new Gyro(0);
	lw->AddSensor("DriveTrain", "DriveTrainGyro", driveTrainDriveTrainGyro);
	driveTrainDriveTrainGyro->SetSensitivity(0.007);
	driveTrainLeftRearEncoder = new Encoder(0, 1, false, Encoder::k4X);
	lw->AddSensor("DriveTrain", "LeftRearEncoder", driveTrainLeftRearEncoder);
	driveTrainLeftRearEncoder->SetDistancePerPulse(1.0);
        driveTrainLeftRearEncoder->SetPIDSourceParameter(Encoder::kRate);
	driveTrainLeftFrontEncoder = new Encoder(2, 3, false, Encoder::k4X);
	lw->AddSensor("DriveTrain", "LeftFrontEncoder", driveTrainLeftFrontEncoder);
	driveTrainLeftFrontEncoder->SetDistancePerPulse(1.0);
        driveTrainLeftFrontEncoder->SetPIDSourceParameter(Encoder::kRate);
	driveTrainRightRearEncoder = new Encoder(4, 5, true, Encoder::k4X);
	lw->AddSensor("DriveTrain", "RightRearEncoder", driveTrainRightRearEncoder);
	driveTrainRightRearEncoder->SetDistancePerPulse(1.0);
        driveTrainRightRearEncoder->SetPIDSourceParameter(Encoder::kRate);
	driveTrainRightFrontEncoder = new Encoder(6, 7, true, Encoder::k4X);
	lw->AddSensor("DriveTrain", "RightFrontEncoder", driveTrainRightFrontEncoder);
	driveTrainRightFrontEncoder->SetDistancePerPulse(1.0);
        driveTrainRightFrontEncoder->SetPIDSourceParameter(Encoder::kRate);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
