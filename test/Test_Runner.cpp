/*
 * TestTemperature_Runner.cpp
 *
 * TDD4ES workshop
 * The MIT License (MIT)
 *
 * Copyright (c) 2013 EP Research
 * [Released under MIT License. Please refer to license.txt for details]
 */

#include "../unity/unity.h"

extern void setUp(void);
extern void tearDown(void);


extern void testbitset(void);
extern void testbittoggle(void);
extern void testbitclear(void);
extern void testswapnibble(void);
extern void testmirrornibble(void);
extern void testASCIItoBCD(void);
extern void testcompactbytes(void);


void unity_run_tests(void) {
	printf("Start testing \n");

	Unity.TestFile = "Tests.cpp";
	UnityBegin();

	// RUN_TEST calls runTest

	RUN_TEST(testbitset, 0);
	RUN_TEST(testbittoggle, 1);
	RUN_TEST(testbitclear,2);
	RUN_TEST(testswapnibble,3);
	RUN_TEST(testmirrornibble,4);
	RUN_TEST(testASCIItoBCD,5);
	RUN_TEST(testcompactbytes,6);

	UnityEnd();

}
