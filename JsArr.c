#include <stdlib.h>
#include <stdio.h>
typedef enum {
  TYPE_INT,
  TYPE_FLOAT,
  TYPE_STRING
}TYPE_INFO;

typedef struct {
    TYPE_INFO type;
    void* element;
}Elements;

typedef struct {
  Elements* element;
  size_t size;
}Array;

typedef struct {
  int usage;
  const char* model;
}Car;

int main() {
  Car car = {4, "Cadilac"};
  Array b = { .element = malloc(sizeof(Elements)) , .size = 2
  };
  b.element->element = malloc(sizeof(int));
  b.element->type = TYPE_INT;

//  a = {75, car};
}
