#include "WPILib.h"
#include "ctre/Phoenix.h"
#include <iostream>
#include <intake.h>
#include <pressandhold.h>
using namespace frc;
class Robot: public IterativeRobot {
public:
     Robot() {} 
	TalonSRX *drive_talon_left;
	Joystick *joystick; 
    Intake  *intake;
    PressAndHold *pressandhold;

    void RobotInit() { 
        drive_talon_left = new TalonSRX(2);
    
        joystick = new  Joystick(0);
        pressandhold = new PressAndHold(joystick,drive_talon_left);
        intake = new Intake(pressandhold,drive_talon_left);
    }
    	

    void DisabledInit() { }
    void AutonomousInit() { }
    void TeleopInit() { }
    void TestInit() { }

    void DisabledPeriodic() { }
    void AutonomousPeriodic() { }
    void TeleopPeriodic() { 
    //drive_talon_left->Set(ControlMode::PercentOutput,1);	   
    intake->run_intake(0.3);

    }
    void TestPeriodic() { }
};

START_ROBOT_CLASS(Robot)