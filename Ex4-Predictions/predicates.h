/********************************************************\
File Name: predicates.cpp
Author: Liri (18/4/2020)
Purpose: This header file contain the declaration of the predicates
\********************************************************/

#pragma once

const int TWO = 2;
const int FIVE = 5;
const int THREE = 3;
const int ZERO = 0;

bool is_even(int number);
/**
* @brief  check if the given number is odd
* @param  IN int number - the number we want to check
*		  OUT bool - True if the given number is odd,
*				     False otherwise
* @return True if the given number is odd, false otherwise
* @author  Liri
*/

bool is_bigger_than_5(int number);
/**
* @brief  check if the given number is bigger than 5
* @param  IN int number - the number we want to check
*		  OUT bool - True if the given number is bigger than 5,
*				     False otherwise
* @return True if the given number is bigger than 5, false otherwise
* @author  Liri
*/

bool is_divided_by_3(int number);
/**
* @brief  check if the given number is divided by 3
* @param  IN int number - the number we want to check
*		  OUT bool - True if the given number is divided by 3,
*				     False otherwise
* @return True if the given number is divided by 3, false otherwise
* @author  Liri
*/