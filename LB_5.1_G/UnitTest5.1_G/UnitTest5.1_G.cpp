#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex.h"
#include "../Complex.cpp"
#include "D:\Project\OOP\LB5\LB_5.1_G\Pair.h"
#include "D:\Project\OOP\LB5\LB_5.1_G\Pair.cpp"
#include "D:\Project\OOP\LB5\LB_5.1_G\Object.cpp"
#include "D:\Project\OOP\LB5\LB_5.1_G\Object.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51G
{
	TEST_CLASS(UnitTest51G)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex i(0, 0);
			Pair  k1(4), k2(2);

			Assert::AreEqual(i.Diff_1(k1, k2), 2);

		}
	};
}
