#include <intake.h>
void Intake::run_intake (float f_max_speed){
 intake_hold->hold(6,f_max_speed,0);
 std::cout<<"the intake part ran "<<std::endl;
 //include the amp reading from the talons
 double amp=intake_talon->GetOutputCurrent();
  
std::cout<<"this is the amp reading: "<<amp<<std::endl;
std::cout<<"this is the voltage reading"<<intake_talon->GetMotorOutputVoltage()<<std::endl;
}
void Intake::intake_options(float f_max_speed){
 //be sure that the input is a float the purpose of this is to control the intake speed while intake is driven 
Joystick *joystick;
std::cout<<"this is the amp reading"<<intake_talon->GetOutputCurrent()<<std::endl;
std::cout<<"this is the voltage reading" << intake_talon->GetMotorOutputVoltage()<<std::endl;
joystick= new Joystick(3);
float hope_this_works= joystick->GetRawAxis(3);
double x_pos =	hope_this_works;
float adjusted_speed = x_pos*f_max_speed;
intake_talon->Set(ControlMode::PercentOutput,adjusted_speed);
}
void Intake::options_3(int f_max_speed){
Joystick *joystick;
std::cout<<"this is the amp reading"<<intake_talon->GetOutputCurrent()<<std::endl;
std::cout<<"this is the amp reading" << intake_talon->GetMotorOutputVoltage()<<std::endl;
joystick= new Joystick(3);
float hope_this_works= joystick->GetRawAxis(3);
double x_pos =	hope_this_works;
float adjusted_speed = x_pos/f_max_speed;
intake_talon->Set(ControlMode::PercentOutput,adjusted_speed);
}
