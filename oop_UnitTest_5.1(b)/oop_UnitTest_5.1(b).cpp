#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_5.1(b)/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace oopUnitTest51b
{
	TEST_CLASS(oopUnitTest51b)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction a(423, 4);
			int r = a.get_a();
			Assert::AreEqual(r, 423);
		}
	};
}
