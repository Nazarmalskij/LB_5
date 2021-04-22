#include "pch.h"
#include "CppUnitTest.h"
#include "../FuzzyNumber.cpp"
#include "D:\Project\OOP\LB5\LB_5.1_E\Object.h"
#include "D:\Project\OOP\LB5\LB_5.1_E\Object.cpp"
#include "../FuzzyNumber.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51E
{
	TEST_CLASS(UnitTest51E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(1.);
			A.SetX(5);
			Assert::AreEqual(A.GetX(), 5.);

		}
	};
}
