#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_1/lab5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = (h(1, 1, 1) + h(1, 1, 1)) / (1 + h(1 * 1 + 1 * 1, 1, 0));
			Assert::AreEqual(c, 1,25);
		}
	};
}
