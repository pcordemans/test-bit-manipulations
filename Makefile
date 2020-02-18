# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under MIT License. Please refer to license.txt for details]
# ========================================== 

C_COMPILER=g++
TARGET_BASE1=test1

TARGET_EXTENSION=.out


TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)

SRC_FILES1= ./unity/unity.cpp ./test/Test_Runner.cpp ./test/Tests.cpp ./main.cpp 

INC_DIRS=-Isrc 
SYMBOLS= -DTEST_ON_HOST -DUNITY_INCLUDE_DOUBLE -DUNITY_DOUBLE_VERBOSE -DUNITY_FLOAT_VERBOSE

CLEANUP = rm -f $(TARGET1) 


all: clean default

default:

	$(C_COMPILER) -std=gnu++11 $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1)
	
	./$(TARGET1)
	

clean:
	$(CLEANUP)