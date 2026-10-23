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

run-math:
	$(CXX) $(CXXFLAGS) week-1/math.cpp -o week-1/math
	./week-1/math

run-for_loops:
	$(CXX) $(CXXFLAGS) week-1/for_loops.cpp -o week-1/for_loops
	./week-1/for_loops

run-functions:
	$(CXX) $(CXXFLAGS) week-1/functions.cpp -o week-1/functions
	./week-1/functions

run-array:
	$(CXX) $(CXXFLAGS) week-1/array.cpp -o week-1/array
	./week-1/array