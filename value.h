#ifndef clox_debug_h
#define clox_debug_h

#include "common.h"

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);

#endif //CRAFTING_COMPILERS_VALUE_H
