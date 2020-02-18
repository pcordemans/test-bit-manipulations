
#include "../unity/unity.h"
#include "../bitmanipulator.h"

void setUp(void) 
{

}

void tearDown(void) 
{

}

void testbitset(void) 
{
	uint32_t result = 0xF0;
	bitset(result, 2);
	TEST_ASSERT_EQUAL_HEX32(0xF4, result);
	bitset(result, 3);
	TEST_ASSERT_EQUAL_HEX32(0xFC, result);
	bitset(result, 8);
	TEST_ASSERT_EQUAL_HEX32(0x1FC, result);
	bitset(result, 2);
	TEST_ASSERT_EQUAL_HEX32(0x1FC, result);
}

void testbittoggle(void)
{
	uint32_t result = 0xF0;
	bittoggle(result, 2);
	TEST_ASSERT_EQUAL_HEX32(0xF4, result);
	bittoggle(result, 2);
	TEST_ASSERT_EQUAL_HEX32(0xF0, result);
	bittoggle(result, 3);
	TEST_ASSERT_EQUAL_HEX32(0xF8, result);
	bittoggle(result, 3);
	TEST_ASSERT_EQUAL_HEX32(0xF0, result);
	bittoggle(result, 7);
	TEST_ASSERT_EQUAL_HEX32(0x70, result);
	bittoggle(result, 7);
	TEST_ASSERT_EQUAL_HEX32(0xF0, result);
}

void testbitclear(void)
{
	uint32_t result = 0xF0;
	bitclear(result, 2);
	TEST_ASSERT_EQUAL_HEX32(0xF0, result);
	bitclear(result, 4);
	TEST_ASSERT_EQUAL_HEX32(0xE0, result);
	bitclear(result, 7);
	TEST_ASSERT_EQUAL_HEX32(0x60, result);
}

void testswapnibble(void)
{
	uint8_t result = 0xA5;
	swapnibble(result);
	TEST_ASSERT_EQUAL_HEX8(0x5A, result);
	result = 0x42;
	swapnibble(result);
	TEST_ASSERT_EQUAL_HEX8(0x24, result);
}

void testmirrornibble(void)
{
	uint8_t result = 0x05;
	mirrornibble(result);
	TEST_ASSERT_EQUAL_HEX8(0xA5, result);
	result = 0x0F;
	mirrornibble(result);
	TEST_ASSERT_EQUAL_HEX8(0xFF, result);
	result = 0x01;
	mirrornibble(result);
	TEST_ASSERT_EQUAL_HEX8(0x81, result);
}

void testASCIItoBCD(void)
{
	uint8_t result = 0;
	ASCIItoBCD('1','2',result);
	TEST_ASSERT_EQUAL_HEX8(0x12, result);
	result = 0;
	ASCIItoBCD('3', '9', result);
	TEST_ASSERT_EQUAL_HEX8(0x39, result);
}

void testcompactbytes(void)
{
	uint32_t result = 0x0;
	uint8_t A[] = {0x2, 0xB, 0x10, 0xF0};
	compactbytes(A, result);
	TEST_ASSERT_EQUAL_HEX32(0xF0100B02, result);
	uint8_t B[] = {0x1, 0x2, 0x30, 0x40};
	result = 0x0;
	compactbytes(B, result);
	TEST_ASSERT_EQUAL_HEX32(0x40300201, result);
}