#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.4(3)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double N, z, i;
			i = 1;
			N = 10;
			z = ((1.0 + (1. * i / 1. * N)) / (i * i));
			double ExpectedValue = S0(N);

			Assert::AreEqual(z, ExpectedValue, 30.8395);
		}
	};
}
