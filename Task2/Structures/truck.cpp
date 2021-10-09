#include <stdexcept>
#include "truck.h"
#include "../Additional_functions/random.h"

void Truck::In(FILE *input) {
  int max_weight, tank_volume;
  double consumption;
  if (fscanf(input, "%i %i %lf", &max_weight, &tank_volume, &consumption) != 3) {
    throw std::invalid_argument("Incorrect vehicle!");
  }
  if (max_weight < 1000 || max_weight > 4000 || tank_volume < 200 ||
      tank_volume > 800 || consumption < 20.0 || consumption > 45.0) {
    throw std::invalid_argument("Incorrect data for that vehicle!");
  } else{
    this->consumption = consumption;
    this->tank_volume = tank_volume;
    this->max_weight = max_weight;
  }
}

void Truck::InRnd() {
  this->tank_volume = my_functions::Random(200, 800);
  this->max_weight = my_functions::Random(1000, 4000);
  this->consumption = my_functions::Random(20.0, 45.0);
}

void Truck::Out(FILE *output) {
  fprintf(output, "%s %i%s %i%s %lf%s %lf \n", "It is truck: maximal weight =",
          this->max_weight, ", tank volume =",
          this->tank_volume, ", consumption =",
          this->consumption, ". maximal range =",
          MaxDistance());
}
