SRC = $(wildcard src/*.cpp)
DST = $(patsubst src/%.cpp, obj/%.o, $(SRC))
# DST = $(SRC:.cpp=.c) # 只能替换后缀

all: $(DST)
	ar rcs lib/libhazel.a $^
	# g++ -shared $^ -o lib/libhazel.so
obj/%.o: src/%.cpp
	g++ -E $^ -o $(@:.o=.i)
	g++ -c $^ -o $@
	# g++ -c -fpic $^ -o $@ #-fpic(position independent code)
clean:
	rm -f obj/*.o obj/*.i lib/*.a lib/*.so