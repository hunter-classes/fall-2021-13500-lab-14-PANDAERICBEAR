main: main.o myvector.o
	g++ -o main main.o myvector.o

# tests: tests.o profile.o network.o
# 	g++ -o tests tests.o profile.o network.o

main.o: main.cpp myvector.h
	g++ -c -std=c++17 main.cpp

myvector.o: myvector.cpp myvector.h
	g++ -c -std=c++17 myvector.cpp

clean:
	rm -f *.o *.gch main
