#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_02.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0502
{
	TEST_CLASS(UnitTest0502)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double k;
			int n = 0;
			double s = 0;
			k = S(2, 0.001, n, s);
			Assert::AreEqual(k, 54.59825, 0.001);
		}
	};
}
