#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\dickbutt\dickbutt.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testingdickbutt
{		
	TEST_CLASS(dickbutttest)
	{
	public:
		
		TEST_METHOD(dicktest) // we all know unit is just slang for dick, anyway
		{
			Assert::IsTrue(dick::butt().dickbutt());
			Assert::IsFalse(dick::butt().dickbutt(false));
			Assert::IsFalse(dick::butt().dickbutt(true, 3));
			Assert::IsTrue(dick::butt().dickbutt(true, 8));
			Assert::IsTrue(dick::butt().dick_or_butt());
			Assert::IsTrue(dick::butt().dick_or_butt(false));
			Assert::IsTrue(dick::butt().dick_or_butt(false, 8));
			Assert::IsTrue(dick::butt().dick_or_butt(true, 3));
			Assert::IsFalse(dick::butt().dick_or_butt(false, 3));
			Assert::IsTrue(dick::butt().isButt());
			Assert::IsFalse(dick::butt().isButt(false));
			Assert::IsTrue(dick::butt().isDick());
			Assert::IsFalse(dick::butt().isDick(3));
			// Developer's note: it is wrong to assert your dick and/or butt like this.
			// Please obtain permission before doing such a thing.
		}

	};
}