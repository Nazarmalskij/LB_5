#include "pch.h"
#include "CppUnitTest.h"
#include "../Pair.h"
#include "../Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51F
{
	TEST_CLASS(UnitTest51F)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair  k1((double)2.);
			k1.SetFirst((double)2.);
			Assert::AreEqual(k1.GetA(),2.);

		}
	};
}
