#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab07_3_it/Lab07_3_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int result = 0;
            int count = 0;
            const int rowCount = 4;
            const int colCount = 4;
            int a[rowCount][colCount] = {
              {1, 5, 6, 10},
              {4, 12, 18, 9},
              {3, -2, 7, 0},
              {-3, 4, 6, 7}
            };
            int* pa[4] = { a[0], a[1], a[2], a[3] };
            result = Count(pa, rowCount, colCount,count);
            Assert::AreEqual(3, result);

		}
	};
}
