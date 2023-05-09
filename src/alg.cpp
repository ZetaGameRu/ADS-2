// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double Obj = value;
  for (uint64_t i = 2; i <= n; i++)
    Obj *= value;
  return Obj;
}

uint64_t fact(uint16_t n) {
  uint64_t Obj = 1;
  for (uint64_t i = 2; i <= n; i++)
    Obj *= i;
  return Obj;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double Obj = 1;
  for (uint64_t i = 1; i <= count; i++)
    Obj+=calcItem(x, i);
  return Obj;
}

double sinn(double x, uint16_t count) {
  double Obj = x;
  for (uint64_t i = 2; i <= count; i++)
    Obj += pown(-1, i-1) * calcItem(x, 2 * i - 1);
  return Obj;
}

double cosn(double x, uint16_t count) {
  double Obj = 1;
  for (uint64_t i = 2; i <= count; i++)
    Obj += pown(-1, i-1) * calcItem(x, 2 * i - 2);
  return Obj;
}
