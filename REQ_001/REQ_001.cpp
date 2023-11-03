#include "pch.h"
#include "CppUnitTest.h"


extern "C" char* OutcomeDecider(char* player1Input, char* player2Input);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(OutcomeDeciderReturnValueInvalid)
		{
			char* const Result = OutcomeDecider("Paer", "Paper");
			char* const Expected = "Invalid";
			int outcome = strcmp(Result, Expected);
			int actual = 0;
			Assert::AreEqual(actual, outcome);
		}
		TEST_METHOD(OutcomeDeciderReturnValuePlayer1)
		{
			char* Result = OutcomeDecider("Paper", "Rock");
			char* Expected = "Player1";
			int outcome = strcmp(Result, Expected);
			int actual = 0;
			Assert::AreEqual(actual, outcome);
		}
		TEST_METHOD(OutcomeDeciderReturnValuePlayer2)
		{
			char* Result = OutcomeDecider("Rock", "Scissors");
			char* Expected = "Player2";
			int outcome = strcmp(Result, Expected);
			int actual = 0;
			Assert::AreEqual(actual, outcome);
		}
	};
}
