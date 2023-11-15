#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-08.1.string/PR-08.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081string
{
	TEST_CLASS(UnitTest081string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			{
				char str[101] = "a**b**c**d";

				int pos = Count(str);

				Assert::AreEqual(pos, 0);
			}

		}
	};
}
