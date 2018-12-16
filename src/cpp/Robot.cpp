#include "WPILib.h"
#include "ctre/Phoenix.h"
#include <iostream>
#include <intake.h>
#include <pressandhold.h>
using namespace frc;
class Robot: public IterativeRobot {
public:
     Robot() {} 
	TalonSRX *intake_talon_1;
	Joystick *joystick; 
    Intake  *intake_talon;
    PressAndHold *pressandhold;

    void RobotInit() { 
        intake_talon_1 = new TalonSRX(6);
        joystick = new  Joystick(0);
        pressandhold = new PressAndHold(joystick,intake_talon_1);
        intake_talon = new Intake(pressandhold,intake_talon_1,joystick);
    }
    	

    void DisabledInit() { }
    void AutonomousInit() { }
    void TeleopInit() { }
    void TestInit() { }

    void DisabledPeriodic() { }
    void AutonomousPeriodic() { }
    void TeleopPeriodic() { 
    //drive_talon_left->Set(ControlMode::PercentOutput,1);	   
    intake_talon->intake_options(1);
    // run intake to 0 as the paramter now has no relevance over the class 

    }
    void TestPeriodic() { }
};

START_ROBOT_CLASS(Robot)
