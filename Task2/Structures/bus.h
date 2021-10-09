#ifndef MAIN_CPP_STRUCTURES_BUS_H_
#define MAIN_CPP_STRUCTURES_BUS_H_

#include "vehicle.h"

class Bus : public Vehicle {
 public:
  virtual ~Bus() = default;

  static Vehicle *StaticIn(FILE *input);

  static Vehicle *StaticInRnd();

  virtual void In(FILE *input);

  virtual void InRnd();

  virtual void Out(FILE *output);

 private:
  short max_passengers;
};

#endif
