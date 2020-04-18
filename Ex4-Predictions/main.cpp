/********************************************************\
File Name: main.cpp
Author: Liri (18/4/2020)
Purpose: This file pass vector of numbers into predicates and print
		 the vector of numbers that return after passing through it
\********************************************************/

#include "predicates.h"
#include <iostream>
#include <vector>
#include <functional>

std::vector<int> filterlnts(std::vector<int> numbers,
	std::function<bool(int)> Predicate) {
	/**
	* @brief  go through the numbers and save to another vector only
	*		  the numbers that the predicate to them return true
	* @param  IN std::vector<int> numbers - the given vector of numbers
	*		  IN std::function<bool(int)> Predicate - the predicate
	*		  OUT std::vector<int> the vector of the numbers that the predicate
	*		  of them return true
	* @return the numbers that the predicate of them return return true
	* @author  Liri
	*/
	std::vector<int> numbers_after_filter;
	for (int number : numbers)
	{
		if (true == Predicate(number))
		{
			numbers_after_filter.push_back(number);
		}
	}
	return numbers_after_filter;
}