#include "Mem.h"
#include "Types.h"

 etat Initmem(mem Memory, uint8_t capacite, uint8_t taille,
    uint8_t memoire, uint8_t indexe) {
    Memory.capacity = capacite;
    Memory.size = taille;
    Memory.memory = memoire;
    Memory.index = indexe;
}

void store(mem* mem, unsigned int donnee) {

}