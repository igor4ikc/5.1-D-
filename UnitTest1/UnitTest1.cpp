#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1(D)/Vector2D.h"
#include "../5.1(D)/Vector2D.cpp"
#include "../5.1(D)/Pair.h"
#include "../5.1(D)/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector2D b(1, 0);
			++b;
			Assert::AreEqual(b.getX(), 2.0);
		}
	};
}
