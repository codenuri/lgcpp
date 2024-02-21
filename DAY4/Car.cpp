// Car.cpp

#include "Car.h"

int Car::cnt = 0;	

Car::Car() { ++cnt;}
Car::~Car() {--cnt;}

void Car::set_color(int c) 
{
	 color = c;
}

int Car::get_count() 
{ 
	return cnt;
} 	
