

INC_DIRS = -I softeer

all: build/a.out

run: build/a.out
	build/a.out

build/a.out: main.cpp
	g++ main.cpp -o build/a.out $(INC_DIRS)