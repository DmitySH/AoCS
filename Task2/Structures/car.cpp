#include <stdexcept>
#include "car.h"
#include "../Additional_functions/random.h"

void Car::In(FILE *input) {
  int tank_volume;
  short max_speed;
  double consumption;
  if (fscanf(input, "%hi %i %lf", &max_speed, &tank_volume, &consumption) != 3) {
    throw std::invalid_argument("Incorrect vehicle!");
  }
  if (max_speed < 80 || max_speed > 320 || tank_volume < 50 ||
      tank_volume > 150 || consumption < 6.0 || consumption > 25.0) {
    throw std::invalid_argument("Incorrect data for that vehicle!");
  } else {
    this->consumption = consumption;
    this->tank_volume = tank_volume;
    this->max_speed = max_speed;
  }
}

void Car::InRnd() {
  this->tank_volume = my_functions::Random(50, 150);
  this->max_speed = my_functions::Random(80, 320);
  this->consumption = my_functions::Random(6.0, 25.0);
}

void Car::Out(FILE *output) {
  fprintf(output, "%s %hi%s %i%s %lf%s %lf \n", "It is car: maximal speed =",
          this->max_speed, ", tank volume = ",
          this->tank_volume, ", consumption =",
          this->consumption, ". maximal range =",
          MaxDistance());
}
