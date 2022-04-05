// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Subsystems/Elevator.h"
#include "ctre/Phoenix.h"

WPI_VictorSPX elevatorMotor = {5};

Elevator::Elevator() : Subsystem("ExampleSubsystem") {}

void elevatorUp(){
  elevatorMotor.Set(ControlMode::PercentOutput, 1);
}

void elevatorDown(){
  elevatorMotor.Set(ControlMode::PercentOutput, -1);
}

void elevatorOff(){
  elevatorMotor.Set(ControlMode::PercentOutput, 0);
}

void Elevator::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
