#ifndef MAIN_CPP_STRUCTURES_TRUCK_H_
#define MAIN_CPP_STRUCTURES_TRUCK_H_

#include "vehicle.h"

class Truck : public Vehicle {
 public:
  virtual ~Truck() = default;

  void In(FILE *input);

  virtual void InRnd();

  virtual void Out(FILE *output);

 private:
  int max_weight;
};

#endif
