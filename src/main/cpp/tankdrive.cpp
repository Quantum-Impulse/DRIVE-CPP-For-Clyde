#include <iostream>
#include "controller.hpp"
#include <frc/SpeedControllerGroup.h>
#include <VictorSP.h>
#include "tankdrive.hpp"

void DriveTrain::drive(frc::SpeedControllerGroup & left, frc::SpeedControllerGroup & right, FRC5572Controller & driver){
    left.Set(driver.L().second);
    right.Set(driver.R().second);
}




