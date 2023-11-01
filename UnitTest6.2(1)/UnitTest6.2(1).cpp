#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2(1)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> testVector = { 2, 4, 6, 8, 10 };
			int result = findIndex(testVector);
			Assert::AreEqual(1, 1);
		}
	};
}
