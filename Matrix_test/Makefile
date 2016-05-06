
#GTEST_DIR = /
CXX = g++
CPPFLAGS += -std=c++11 -pthread -g
CPPWARNING += -Wall -Werror -W -Wextra -pedantic
MATRIXCLASS = matrix.h matrix.cpp

TESTS = test01

all: $(TESTS)

clean:
	rm -f $(TESTS) *.o

test01: test01.o
	$(CXX) $(CPPWARNING) $(CPPFLAGS) -o test01 test01.o

test01.o: test01.cpp $(MATRIXCLASS)
	$(CXX) $(CPPWARNING) $(CPPFLAGS) -c test01.cpp
