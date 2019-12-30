#ifndef DRIVE_TRAIN_HPP
#define DRIVE_TRAIN_HPP

#include <iostream>
#include "controller.hpp"
#include <frc/SpeedControllerGroup.h>
#include <frc/VictorSP.h>

/**
 * @class	    DriveTrain
 * @description Makes the main.cpp(Robot.cpp) more readable 
 * @notes	    This class should be updated for other versions as needed.
 */
  class DriveTrain{
public:

void drive( frc::SpeedControllerGroup & left,  frc::SpeedControllerGroup & right,  FRC5572Controller & driver);

  };  
#endif