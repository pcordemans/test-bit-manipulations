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


extern void testbit(void);


void unity_run_tests(void) {
	printf("Start testing \n");

	Unity.TestFile = "Tests.cpp";
	UnityBegin();

	// RUN_TEST calls runTest

	RUN_TEST(testbit, 0);
	
	UnityEnd();

}
