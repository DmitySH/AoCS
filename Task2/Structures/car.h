#ifndef MAIN_CPP_STRUCTURES_CAR_H_
#define MAIN_CPP_STRUCTURES_CAR_H_

#include "vehicle.h"

class Car : public Vehicle {
 public:
  virtual ~Car() = default;

  static Vehicle *StaticIn(FILE *input);

  static Vehicle *StaticInRnd();

  virtual void In(FILE *input);

  virtual void InRnd();

  virtual void Out(FILE *output);

 private:
  short max_speed;
};

#endif
