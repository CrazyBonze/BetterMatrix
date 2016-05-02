test: main.o
	g++ -std=c++11 -Wall -Werror -W -pedantic -g -o test main.o

main.o: main.cpp matrix.h matrix.cpp
	g++ -std=c++11 -Wall -Werror -W -pedantic -g -c main.cpp

clean:
	rm -rf *.o test
