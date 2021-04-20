#include "Pair.h"

Pair::Pair()
	: x(0), y(0)
{}

Pair::Pair(double a, double b)
try
	:x(exp1(a)), y(exp2(b))
{

}
catch (bad_exception& e)
{
	cout << e.what() << endl;
	exit(1);
}
catch (exception* e)
{
	cout << e->what() << endl;
	exit(1);
}
catch (Error e)
{
	cout << e.what() << endl;
	exit(1);
}

double Pair::exp1(double y)
{
	if (y == 1)
		throw new exception;
	if (y < 0 && y > -10)
		throw Error("y < 0 && y > -10");
	return y;
}

double Pair::exp2(double x)
{
	if (x == 0)
		throw bad_exception();
	return x;
}

Pair::Pair(const Pair& t)
{
	x = t.x;
	y = t.y;
}
bool operator ==(const Pair& t1, const Pair& t2)
{
	return t1.getX() == t2.getX() && t1.getY() == t2.getY();
}
bool operator >(const Pair& t1, const Pair& t2)
{
	return t1.getX() > t2.getX() || t1.getX() == t2.getX() && t1.getY() > t2.getY();
}
bool operator <(const Pair& t1, const Pair& t2)
{
	return t1.getX() < t2.getX() || t1.getX() == t2.getX() && t1.getY() < t2.getY();
}

bool operator >=(const Pair& t1, const Pair& t2)
{
	return !(t1 < t2);
}
bool operator <=(const Pair& t1, const Pair& t2)
{
	return !(t1 > t2);
}
bool operator !=(const Pair& t1, const Pair& t2)
{
	return !(t1 == t2);
}