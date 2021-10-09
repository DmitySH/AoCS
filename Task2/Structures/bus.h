#ifndef MAIN_CPP_STRUCTURES_BUS_H_
#define MAIN_CPP_STRUCTURES_BUS_H_

#include "vehicle.h"

class Bus : public Vehicle {
 public:
  virtual ~Bus() = default;

  virtual void In(FILE *input);

  virtual void InRnd();

  virtual void Out(FILE *output);

 private:
  short max_passengers;
};

#endif
