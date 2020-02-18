#ifndef BITMANIPULATOR_H
#define BITMANIPULATOR_H

#include "stdint.h"

void bitset(uint32_t &word, uint8_t position);

void bittoggle(uint32_t &word, uint8_t position);

void bitclear(uint32_t &word, uint8_t position);

void swapnibble(uint8_t &byte);

void mirrornibble(uint8_t &byte);

void ASCIItoBCD(char upper, char lower, uint8_t &result);

void compactbytes(uint8_t *A, uint32_t result);

#endif