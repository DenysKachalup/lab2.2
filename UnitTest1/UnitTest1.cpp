#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.2/Stek.h"
#include "../lab2.2/Stek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Stek x(3);
			int a =2;
			Stek y = x * a;
			a = y.getX();
			Assert::AreEqual(a, 6);
		}
	};
}
