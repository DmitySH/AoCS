#ifndef MAIN_CPP_DATA_STRUCTURES_CONTAINER_H_
#define MAIN_CPP_DATA_STRUCTURES_CONTAINER_H_

#include "../Structures/vehicle.h"

// Простейший контейнер на основе одномерного массива.
class Container {
 public:
  // Текущая длина.
  int len;

  Container(int s);
  ~Container();

  // Ввод содержимого контейнера из указанного потока.
  void In(FILE *input);
  // Случайный ввод содержимого контейнера.
  void InRnd(int size);
  // Вывод содержимого контейнера в указанный поток.
  void Out(FILE *output);
  // Сортировка Шелла.
  void ShellSortByMaxDistance();
  // Очистка контейнера от данных.
  void Clear();
 private:
  Vehicle** storage;
  int size;
};
#endif
