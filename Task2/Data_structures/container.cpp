#include <stdexcept>
#include "container.h"

// Конструктор контейнера.
Container::Container(int s): len{0}, size{s} {
  storage = new Vehicle*[s];
}

// Деструктор контейнера.
Container::~Container() {
  Clear();
  delete[] storage;
}

// Очистка контейнера от элементов (освобождение памяти).
void Container::Clear() {
  for(int i = 0; i < len; i++) {
    delete storage[i];
  }
  len = 0;
}

// Ввод содержимого контейнера из файла.
void Container::In(FILE *input) {
  while (!feof(input) && len < this->size) {
    if ((storage[len] = Vehicle::StaticIn(input)) != nullptr) {
      ++len;
    }
    else {
      throw std::invalid_argument("Incorrect vehicle on line ");
    }
  }
}

// Случайный ввод содержимого контейнера.
void Container::InRnd(int s) {
  if(s > size) {
    s = size;
  }

  while(len < s) {
    if((storage[len] = Vehicle::StaticInRnd()) != nullptr) {
      ++len;
    }
  }
}

// Вывод содержимого контейнера в файл.
void Container::Out(FILE *output) {
  fprintf(output, "%s %i %s", "Container contains", len, "elements\n");
  for (int i = 0; i < len; i++) {
    fprintf(output, "%i%s", i, ": ");
    storage[i]->Out(output);
  }
}

void Container::ShellSortByMaxDistance() {
  int d = len / 2;
  while (d != 0) {
    for (int i = d; i < len; i += d) {
      int j = i;
      while (j > 0 && storage[j - d]->MaxDistance() > storage[j]->MaxDistance()) {
        Vehicle *temp = storage[j - d];
        storage[j - d] = storage[j];
        storage[j] = temp;
        j -= d;
      }
    }
    d /= 2;
  }
}
