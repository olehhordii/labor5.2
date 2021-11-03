#include "pch.h"
#include "CppUnitTest.h"
#include "../labor5.2/labor5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int c = 1.5;
			int t;
			t = A(1, 2, 3);
			Assert::AreEqual(t, c);
		}
	};
}
