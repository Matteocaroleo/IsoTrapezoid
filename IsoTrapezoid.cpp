/// @file IsoTrapezoid.cpp
/// @brief Implementation of subclass IsoTrapezoid

#include "IsoTrapezoid.h"
#include <iostream>
#include <cmath.h>

///@brief Initializer function
void IsoTrapezoid::Init(){
	topSide = bottomSide = height = 1;
}

/// @brief Reset fucntion
void IsoTrapezoid::Reset(){
	//deallocs memory...
	Init();
}
/// @brief Copy initializer function
/// @param source Is from where the params are copied
void IsoTrapezoid::CopyInit(const IsoTrapezoid& source){
	Reset();
	topSide = source.topSide;
	bottomSide = source.bottomSide;
	height = source.height;
}

float IsoTrapezoid::Side(){
	float t_base = (bottomSide - topSide) / 2;
	return sqrt ((height * height) + (t_base * t_base));
}

/// @brief Default constructor
IsoTrapezoid::IsoTrapezoid (){
	Init();
	cout << "Default constructor" << endl;
}

/// @brief Params constructor
IsoTrapezoid::IsoTrapezoid(float t, float b, float h){
	Init();
	SetParams (t , b , h);
	cout << "Param costructor"<< endl;
}

IsoTrapezoid::~IsoTrapezoid(){
	Reset();
	cout << "iso Destructor"<< endl;
}

///@brief Getters for all parameters
/// @param mem_t memory for top side
/// @param mem_b memory for bottom side
/// @param mem_h memory for height
void IsoTrapezoid::GetParams(float& mem_t, float& mem_b, float& mem_h){
	mem_t = topSide;
	mem_b = bottomSide;
	mem_h = height;
}

/// @brief Setter for top side
/// @param new_t is new value of top side (must be > 0)
void IsoTrapezoid::SetTopSide (float new_t){
	(new_t>0)? topSide = new_t : ErrorMessage ("top side is less than/ equal to 0");
}	

/// @brief Setter for bottom side
/// @param new_b is new value of bottom side (must be > 0)
void IsoTrapezoid::SetBottomSide (float new_b){
	(new_b>0)? bottomSide = new_b : ErrorMessage ("bottom side is less than/ equal to 0");
}

/// @brief Setter for height
/// @param new_h is new value of height (must be > 0)
void IsoTrapezoid::SetHeight (float new_h){
	(new_h>0)? height = new_h : ErrorMessage ("height is less than/ equal to 0");
}	

/// @brief Setter for all params
void IsoTrapezoid::SetParams (float new_t, float new_b, float new_h){
	SetTopSide (new_t);
	SetBottomSide (new_b);
	SetHeight (new_h);
}	

/// @brief write an error message 
/// @param string message to be printed
void IsoTrapezoid::ErrorMessage(const char *string) {
	
	cout << endl << "ERROR -- IsoTrapezoid --";
	cout << string << endl;

}

/// @brief write a warning message 
/// @param string message to be printed
void IsoTrapezoid::WarningMessage(const char *string) {
	
	cout << endl << "WARNING -- IsoTrapezoid --";
	cout << string << endl;
}

/// @brief Dump function
void IsoTrapezoid::Dump(){

	Polygon::Dump();
	cout << "top side: " << topSide << "\t";
	cout << "bottom side: " << bottomSide << "\t";
	cout << "height: " << height << endl;
}

IsoTrapezoid& IsoTrapezoid::operator= ( IsoTrapezoid& r){
	CopyInit(r);
	return *this;
}

///@breif overload of == operator
/// @param r right operanf
/// @return left operand
bool IsoTrapezoid::operator == (IsoTrapezoid& r){
	if (topSide == r.topSide && bottomSide == r.bottomSide && height == height)
		return true;
	return false;
}

ostream& operator << (ostream& out, IsoTrapezoid& r){
	r.Dump();
	return out;
}

istream& operator >> (istream& in, IsoTrapezoid& r){
	float x;
	in >> x;
	r.SetTopSide(x);
	in >> x;
        r.SetBottomSide(x);
	in >> x;
	r.SetHeight(x);
	return in;
}	
