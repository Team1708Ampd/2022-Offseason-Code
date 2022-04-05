// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Subsystems/Indexer.h"
#include "ctre/Phoenix.h"

WPI_VictorSPX indexer = {15};
WPI_VictorSPX angledIndexer = {16};

Indexer::Indexer() : Subsystem("ExampleSubsystem") {}

void indexerForward(){
  indexer.Set(ControlMode::PercentOutput, 1);
  angledIndexer.Set(ControlMode::PercentOutput, -1);
}

void indexerReverse(){
  indexer.Set(ControlMode::PercentOutput, -1);
  angledIndexer.Set(ControlMode::PercentOutput, 1);
}

void indexerOff(){
  indexer.Set(ControlMode::PercentOutput, 0);
  angledIndexer.Set(ControlMode::PercentOutput, 0);
}

void Indexer::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
