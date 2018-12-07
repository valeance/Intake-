#include <intake.h>
void Intake::run_intake (float f_max_speed){
 intake_hold->hold(6,f_max_speed,0);
 std::cout<<"the intake part ran "<<std::endl;
 //include the amp reading from the talons
 double amp=intake_talon->GetOutputCurrent();
  
std::cout<<"this is the amp reading: "<<amp<<std::endl;
std::cout<<"this is the voltage reading"<<intake_talon->GetMotorOutputVoltage()<<std::endl;
}