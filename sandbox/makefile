SRC = $(wildcard src/*.cpp)
DST = $(patsubst src/%.cpp, obj/%.o, $(SRC))

all: $(DST)
	g++ $^ -o sandbox -L ../hazel/lib -lhazel
obj/%.o: src/%.cpp
	g++ -c $^ -o $@ -I ../hazel/include
clean:
	rm -f sandbox obj/*.o obj/*.i lib/*.a lib/*.so