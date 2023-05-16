/// @file IsoTrapezoid.cpp
/// @brief Implementation of subclass IsoTrapezoid

#include "IsoTrapezoid.h"
#include <iostream>

///@brief initializer function
void IsoTrapezoid::Init(){
	topSide = bottomSide = height = 1;
}


IsoTrapezoid::IsoTrapezoid (){
	cout << "Default constructor" << endl;
}
