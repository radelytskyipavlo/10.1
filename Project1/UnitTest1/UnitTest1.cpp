#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(CountDotsBeforeNonDotsTest)
    {
    public:

        TEST_METHOD(NoDots)
        {
            char str[] = "abcdef";
            Assert::AreEqual(0, CountThirdDots(str));
        }

        TEST_METHOD(ThreeDots)
        {
            char str[] = "ab...cd.ef";
            Assert::AreEqual(2, CountThirdDots(str));
        }


        TEST_METHOD(EmptyInput)
        {
            char str[] = "";
            Assert::AreEqual(0, CountThirdDots(str));
        }
    };
}