/********************************************************\
File Name: predicates.cpp
Author: Liri (18/4/2020)
Purpose: This file contain the predicates
\********************************************************/

#include "predicates.h"

bool is_even(int number) {
	return (number % TWO == ZERO);
}

bool is_bigger_than_5(int number) {
	return (number > FIVE);
}

bool is_divided_by_3(int number) {
	return (number % THREE == ZERO);
}