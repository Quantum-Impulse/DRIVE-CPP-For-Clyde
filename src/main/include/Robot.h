/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>

#include <frc/IterativeRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include "controller.hpp"
#include "tankdrive.hpp"
#include <frc/VictorSP.h>

class Robot : public frc::IterativeRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

  frc::VictorSP topLeft {6};
  frc::VictorSP topRight {3};
  frc::VictorSP bottomLeft {2};
  frc::VictorSP bottomRight {9};

  frc::SpeedControllerGroup left{topLeft, bottomLeft};
  frc::SpeedControllerGroup right{topRight, bottomRight};
  FRC5572Controller driver{0};

  DriveTrain driveSystem;

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;

};