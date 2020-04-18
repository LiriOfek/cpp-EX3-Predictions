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

const char* COMMA = ", ";

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

void print_vector(std::vector<int> numbers_vector) {
	/**
	* @brief  print the numbers that the given vector contain
	* @param  IN std::vector<int> numbers_vector - the given vector
	*		  that contain the numbers
	* @return this function has no return value
	* @author  Liri
	*/
	for (int number : numbers_vector) {
		std::cout << number << COMMA;
	}
	std::cout << std::endl;
}

void print_filter_predicates(std::vector<std::function<bool(int)>> Predicates,
	std::vector<int> numbers) {
	/**
	* @brief  pass the given vector with the predicates, and print the
	*		  vector after that pass through the filter
	* @param  std::vector<std::function<bool(int)>> Predicates - the predicates
	*		  std::vector<int> numbers - the given vector of numbers
	* @return this function has no return value
	* @author Liri
	*/

	/*lambda function*/
	auto pass_predicate_into_filter = [](std::function<bool(int)> Predicate,
		std::vector<int> numbers)
	{return filterlnts(numbers, Predicate); };
	std::vector<int> numbers_after_filter;

	for (std::function<bool(int)> Predicate : Predicates) {
		numbers_after_filter = pass_predicate_into_filter(Predicate, numbers);
		print_vector(numbers_after_filter);
	}
}
