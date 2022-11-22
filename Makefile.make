all: adder

adder: adder.cpp
	g++ -g -o adder adder.cpp

clean:
	rm adder