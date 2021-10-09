#include <stdexcept>
#include "vehicle.h"
#include "truck.h"
#include "car.h"
#include "bus.h"

// Ввод параметров обобщенного ТС из файла.
Vehicle* Vehicle::StaticIn(FILE *input) {
  int k;
  fscanf(input, "%i \n", &k);
  Vehicle* vehicle = nullptr;
  switch(k) {
    case 1:
      vehicle = new Car;
      break;
    case 2:
      vehicle = new Bus;
      break;
    case 3:
      vehicle = new Truck;
      break;
    default:
      throw std::invalid_argument("Incorrect vehicle!");
  }
  vehicle->In(input);
  return vehicle;
}

// Случайный ввод обобщенного ТС.
Vehicle* Vehicle::StaticInRnd() {
  int k = rand() % 3 + 1;
  Vehicle* vehicle = nullptr;
  switch(k) {
    case 1:
      vehicle = new Car;
      break;
    case 2:
      vehicle = new Bus;
      break;
    case 3:
      vehicle = new Truck;
      break;
    default:
      throw std::invalid_argument("Incorrect vehicle!");
  }
  vehicle->InRnd();
  return vehicle;
}

double Vehicle::MaxDistance() const{
  return this->tank_volume * 100 / this->consumption;
}
