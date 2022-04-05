// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Subsystems/Intake.h"
#include "ctre/Phoenix.h"

WPI_VictorSPX intake = {13};

Intake::Intake() : Subsystem("ExampleSubsystem") {}

void intakeOn(){
  intake.Set(ControlMode::PercentOutput, -1);
}

void outtakeOn(){
  intake.Set(ControlMode::PercentOutput, 1);
}

void intakeOff(){
  intake.Set(ControlMode::PercentOutput, 0);
}

void Intake::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
