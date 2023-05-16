/// @file IsoTrapezoid.h
/// @brief Declaration of subclass IsoTrapezoi<d
/// Isotrapezoid is a sbclass of polygon

#ifndef ISOTRAPEZOID_H
#define ISOTRAPEZOID_H
#include <iostream>

using namespace std;

/// @class IsoTrapezoid
/// @brief Isotrapezoid, a sub-class of Polygon
class IsoTrapezoid : public Polygon {
protected:
	float topSide;
	float bottomSide;
	float height;
	
	/// @name Math functions
	/// @{
	/// Calculates side (is virtual for other subclasses)
	virtual float Side();
	virtual float Area();
	virtual float Perimeter();
public:
	/// @name Constructors/Destructors
	/// @ {
	IsoTrapezoid();
	IsoTrapezoid(float t, float b, float h);
	IsoTrapezoid(const IsoTrapezoid& source);
	virtual ~IsoTrapezoid();
	/// @}


	/// @name Getters
	/// @{
	float GetSide();
	float GetTopSide() {return topSide;}
	float GetBottomSide() {return bottomSIde;}
	float GetHeight() {return height;}
	float GetParams(float& mem_top, float& mem_bottom, float& mem_height);
	/// @}
	
	/// @name Setters
	/// @{
	float SetTopSide(float new_t);
	float SetBottomSide(float new_b);
	float SetHeight (float new_h);
	float SetParams (float new_t, float new_b, float new_h);
	/// @}
	
	/// @name Operators
	/// @{
	
	/// Assignmnent overloading
	IsoTrapezoid& operator= (const IsoTrapezoid& r);
	/// Comparison overloading
	bool operator == (const IsoTrapezoid& r);
	///@}
	
	/// @name Handlers
	/// @{
	void Init();
	void CopyInit(const IsoTrapezoid& source);
	void Reset();
	/// @}

	/// @name Console functions
	/// @{
	void ErrorMessage(const char *string); 
	void WarningMessage(const char *string);
	void Dump();
	void Draw() {cout << "Drawing isotrapezoid..." << endl;}
	/// @}
};

ostream& operator<< (ostream& out, IsoTrapezoid& r);
istream& operator>> (istream& in, IsoTrapezoid& r);

#endif
