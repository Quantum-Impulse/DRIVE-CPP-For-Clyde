#include "controller.hpp"
#include <frc/WPILib.h>
#include <frc/Joystick.h>
#include <frc/GenericHID.h>

FRC5572Controller::FRC5572Controller(int I) {
	pad = new frc::XboxController(I);
}
FRC5572Controller::~FRC5572Controller(){
	delete pad;
}
void FRC5572Controller::UpdateToggleA(){
    if(pad->GetRawButton(X_BUTTON)){
        if(!togglePressedA){
            toggleA = !toggleA;
            togglePressedA = true;
        }
    }else{
        togglePressedA = false;
        }
    }

double FRC5572Controller::LT() {
	return pad->GetRawAxis(LEFT_z);
}

bool FRC5572Controller::LB() {

	return pad->GetRawButton(LEFT_BUTTON);
}

double FRC5572Controller::RT() {
	return pad->GetRawAxis(RIGHT_z);
}

bool FRC5572Controller::RB() {

	return pad->GetRawButton(RIGHT_BUTTON);
}

bool FRC5572Controller::X() {

	return pad->GetRawButton(X_BUTTON);
}

bool FRC5572Controller::Y() {

	return pad->GetRawButton(Y_BUTTON);
}

bool FRC5572Controller::A() {

	return pad->GetRawButton(A_BUTTON);
}

bool FRC5572Controller::B() {

	return pad->GetRawButton(B_BUTTON);
}

std::pair<double, double> FRC5572Controller::L() {

	return std::make_pair(pad->GetRawAxis(LEFT_x), pad->GetRawAxis(LEFT_y));
}

std::pair<double, double> FRC5572Controller::R() {

	return std::make_pair(pad->GetRawAxis(RIGHT_x), pad->GetRawAxis(RIGHT_y));
}

int FRC5572Controller::POV() {
	return pad->GetPOV(0);
}

bool FRC5572Controller::start() {
	return pad->GetRawButton(START_BUTTON);
}

bool FRC5572Controller::back() {
	return pad->GetRawButton(BACK_BUTTON);
}

bool FRC5572Controller::Lbutton() {
	return pad->GetRawButton(LEFT_STICK_BUTTON);
}

bool FRC5572Controller::Rbutton() {
	return pad->GetRawButton(RIGHT_STICK_BUTTON);
}

void FRC5572Controller::rumble(double x, double y) {
	pad->SetRumble(frc::GenericHID::kLeftRumble, x);
	pad->SetRumble(frc::GenericHID::kRightRumble, y);
}