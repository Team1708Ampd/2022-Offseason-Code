// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Subsystems/IntakeArm.h"

#include <frc/Solenoid.h>
// #include <frc/PneumaticsModuleType.h>

// frc::Solenoid solenoid = {30, frc::PneumaticsModuleType::REVPH, 1};

IntakeArm::IntakeArm() : Subsystem("ExampleSubsystem") {}

void extendArm(){
 // solenoid.Set(true);
}
void retractArm(){
//  solenoid.Set(false);
}

void IntakeArm::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
