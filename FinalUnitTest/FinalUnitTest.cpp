#include "pch.h"
#include "CppUnitTest.h"
#include "..\FinalRubenchik\FinalSolution.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FinalUnitTest
{
	TEST_CLASS(FinalUnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Assign
			const int MAX_ROW = 3;
			double matrix[MAX_ROW][MAX_COL] = {3.0,-4.0,-2.0};
			double result;
			//Act
			result = sumOfNegative(matrix, MAX_ROW);
			//Assert
			Assert::AreEqual(result, -6.0);
		}
	};
}
