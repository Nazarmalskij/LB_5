#include "pch.h"
#include "CppUnitTest.h"
#include "../FuzzyNumber_Public.h"
#include "../FuzzyNumber_Public.cpp"
#include "D:\Project\OOP\LB5\LB_5.1_D\Triad.h"
#include "D:\Project\OOP\LB5\LB_5.1_D\Triad.cpp"
#include "D:\Project\OOP\LB5\LB_5.1_D\FuzzyNumber.h"
#include "D:\Project\OOP\LB5\LB_5.1_D\FuzzyNumber.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51D
{
	TEST_CLASS(UnitTest51D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(1.);
			A.SetFirst(5);
			Assert::AreEqual(A.GetFirst(), 5.);
		}
	};
}
