#pragma once
#include <cstdint>

 typedef struct
{
    unsigned int capacity;
    unsigned int size;
    uint8_t* memory;
    uint8_t* index;
} mem;

etat store(mem*, unsigned int);
void Initmem(mem* , unsigned int, unsigned int, uint8_t* , uint8_t)