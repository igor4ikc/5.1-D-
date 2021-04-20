#pragma once
#include "Error.h"
#include <iostream>

using namespace std;

class Pair
{
private:
	double x, y;
public:
	Pair();
	Pair(double x, double y);
	Pair(const Pair&);

	void setX(double value) { x = value; }
	void setY(double value) { y = value; }
	double getX() const { return x; }
	double getY() const { return y; }

	double exp1(double x);
	double exp2(double x);
	friend bool operator ==(const Pair& t1, const Pair& t2);
	friend bool operator >(const Pair& t1, const Pair& t2);
	friend bool operator <(const Pair& t1, const Pair& t2);
	friend bool operator >=(const Pair& t1, const Pair& t2);
	friend bool operator <=(const Pair& t1, const Pair& t2);
	friend bool operator !=(const Pair& t1, const Pair& t2);

};
