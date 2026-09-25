# Target to compile loops
build-loops:
	g++ week-1/loops.cpp -o week-1/loops

# Target to run loops
run-loops: build-loops
	./week-1/loops

# Compiler and Flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Target to compile and run loops
run-loops:
	$(CXX) $(CXXFLAGS) week-1/loops.cpp -o week-1/loops
	./week-1/loops

# Target to clean up all compiled binaries safely
clean:
	rm -f week-1/loops
