#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 2.7/Calculator.h"
#include "..//OOP Lab 2.7/Calculator.cpp"
#include "..//OOP Lab 2.7/Fraction.cpp"
#include "..//OOP Lab 2.7/Fraction.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction fraction(2, 3);
			long x = 2;
			Assert::AreEqual(x, fraction.getNumerator());
		}
	};
}
