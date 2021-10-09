#ifndef MAIN_CPP_STRUCTURES_VEHICLE_H_
#define MAIN_CPP_STRUCTURES_VEHICLE_H_

#include <stdio.h>

// Структура, обобщающая все имеющиеся ТС
class Vehicle {
 protected:
  int tank_volume;
  double consumption;
 public:
  virtual ~Vehicle() = default;
  // Ввод обобщенного ТС.
  static Vehicle *StaticIn(FILE *input);
  // Случайный ввод обобщенного ТС.
  static Vehicle *StaticInRnd();
  // Ввод обобщенного ТС.
  virtual void In(FILE *input) = 0;
  // Виртуальный метод ввода случайного ТС.
  virtual void InRnd() = 0;
  // Вывод обобщенного ТС.
  virtual void Out(FILE *output) = 0;
  // Вычисление максимального расстояния обобщенного ТС.
  double MaxDistance() const;
};

#endif
