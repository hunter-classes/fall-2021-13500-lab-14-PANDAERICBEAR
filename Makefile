main: main.o myvector.o
	g++ -o main main.o myvector.o

tests: tests.o myvector.o
	g++ -o tests tests.o myvector.o

main.o: main.cpp myvector.h
	g++ -c main.cpp

myvector.o: myvector.cpp myvector.h
	g++ -c myvector.cpp

tests.o: tests.cpp doctest.h myvector.h
	g++ -c tests.cpp

clean:
	rm -f *.o *.gch main
