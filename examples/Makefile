CXX		  := g++
CXX_FLAGS := -Wall -Wextra -std=c++17 -g


SRC		:= src

ifeq ($(shell uname -s), Darwin) 
	LIBRARIES := ../target/release/deps/libcbindgen_test.dylib
else
    LIBRARIES := ../target/release/deps/libcbindgen_test.so
endif

ifeq ($(shell uname -s), Darwin) 
	INCLUDE	:= libcbindgen.hpp
else
	INCLUDE	:= .
endif

EXECUTABLE	:= main.bin

all: $(EXECUTABLE)

run: clean all
	./$(EXECUTABLE)

$(EXECUTABLE): main.cpp
	-cd .. && cargo build --release 
	-cd .. && cbindgen . -o examples/libcbindgen.hpp
	-$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

clean:
	-find . \( -name '*.hpp' -o -name '*.bin*' \) -exec rm -rf {} +