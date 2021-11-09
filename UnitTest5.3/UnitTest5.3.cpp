#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab5.3\Lab5.3\Lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 0, j = 1;
			int t;
			t = -x * x / ((2 * j - 1) * 2 * j);
			Assert::AreEqual(t, 0);
		}
	};
}
