#include "stdafx.h"
#include "CppUnitTest.h"
#include "../BitsLibc/BitsLibc.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BitsLibcUnitTest
{		
	TEST_CLASS(Bits2UIntTest)
	{
	public:
		
		TEST_METHOD(Bits2UInt16Test)
		{
			// TODO: 在此输入测试代码
			uint8_t bits[] = { 0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08};
			for (int idx = 0; idx < sizeof(bits) * 8; idx++)
			{
				for (int cnt = 1; cnt < 16 + 1 && (cnt + idx) < sizeof(bits) * 8; cnt++)
				{
					uint64_t value = 0x0102030405060708U;
					value <<= idx;
					value >>= (64 - cnt);
					uint16_t result = Bits2UInt16(bits, idx, cnt);
					Assert::IsTrue(value == result);
				}
			}
		}

	};
}