#ifndef RECEIVER_HPP
#define RECEIVER_HPP

#include "CanParser_autogenerated.hpp"
#include "CommCAN.hpp"
#include "TaskManager.hpp"

/**
 * @brief This task is designed to show example of receiving data from CAN bus.
 * There are few callbacks registered in initialize to show all possibilities of
 * creating callbacks and filters. Every callback must have one RxMessage type
 * argument.
 */
struct Receiver : public SBT::System::PeriodicTask {
  // The constructor of the task
  Receiver();
  // initialize() will be called once when task is created
  void initialize() override;
  // run() will be called repeatedly
  void run() override;

  // Callback being non-static class method
  void Callback2(SBT::System::Comm::CAN::RxMessage mess);
};

#endif // RECEIVER_HPP
