#pragma warning(disable : 4996)
#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.1Iter/Lab_08_1_Iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT81Iter
{
	TEST_CLASS(UT81Iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;

			t = Count("FFFFF");

			Assert::AreEqual(t, 0);
		}
	};
}