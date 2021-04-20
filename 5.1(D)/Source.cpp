#include<iostream>
#include <string>
#include <sstream>
#include "Vector2D.h"

using namespace std;

int main()
{
	Pair a(8.0, 7.0), b(6.3, 5.9);
	bool t = a > b;
	cout << "a > b = " << t << endl;

	Vector2D A;
	Vector2D B;

	try
	{
		cout << "A  " << endl; cin >> A;
		cout << "A = " << A << endl;
		cout << "B  " << endl; cin >> B;
		cout << "B = " << B << endl;
	}
	catch (Error* e)
	{
		cout << e->what() << endl;
	}
	catch (bad_exception e)
	{
		cout << e.what() << endl;
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	double scal = A * B;
	cout << "ScalVect = " << scal << endl;

	Vector2D C = A * scal;
	cout << "C = " << C;

	Vector2D D = B * scal;
	cout << "D = " << D;

	cout << "|A| = " << A.Modul() << endl;
	cout << "|B| = " << B.Modul() << endl;
	cout << "|C| = " << C.Modul() << endl;
	cout << "|D| = " << D.Modul() << endl << endl;

	A < B;
	A > B;
	A == B;

	++A;
	--A;
	B++;
	B--;
	cout << "A = " << A;
	cout << "B = " << B;

	return 0;
}