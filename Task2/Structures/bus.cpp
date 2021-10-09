#include <stdexcept>
#include "bus.h"
#include "../Additional_functions/random.h"

void Bus::In(FILE *input) {
  int tank_volume;
  short max_passengers;
  double consumption;
  if (fscanf(input, "%hi %i %lf", &max_passengers, &tank_volume, &consumption) != 3) {
    throw std::invalid_argument("Incorrect vehicle!");
  }

  if (max_passengers < 10 || max_passengers > 70 || tank_volume < 80 ||
      tank_volume > 250 || consumption < 12.0 || consumption > 30.0) {
    throw std::invalid_argument("Incorrect data for that vehicle!");
  } else {
    this->consumption = consumption;
    this->tank_volume = tank_volume;
    this->max_passengers = max_passengers;
  }
}

void Bus::InRnd() {
  this->tank_volume = my_functions::Random(80, 250);
  this->max_passengers = my_functions::Random(10, 70);
  this->consumption = my_functions::Random(12.0, 30.0);
}

void Bus::Out(FILE *output) {
  fprintf(output, "%s %hi%s %i%s %lf%s %lf \n", "It is bus: maximal passengers =",
          this->max_passengers, ", tank volume =",
          this->tank_volume, ", consumption =",
          this->consumption, ". maximal range =",
          MaxDistance());
}
