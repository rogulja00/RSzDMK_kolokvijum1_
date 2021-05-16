/**
* @file arrays.h
* @brief Datoteka koja definise funkcije za Element i Sum
* @author Aleksandar Rogulja
* @date 16-05-2021
* @version 1.0
*/

#ifndef ARRAYS_H_
#define ARRAYS_H_

#include <avr/io.h>
#include <stdint.h>

int16_t Element(int16_t first_element, int16_t ratio, int16_t n);

void Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode);

#endif /* ARRAYS_H_ */
