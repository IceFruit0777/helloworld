include ../commakefile

all: $(DIR_OBJ) $(OBJ) $(DIR_BIN)
	g++ $(filter %.o, $^) -o $(DIR_BIN)/sandbox -L ../hazel/lib -lhazel
obj/%.o:
	g++ -E $(filter %.cpp, $^) -o $(@:.o=.i) $(INCLUDE)
	g++ -c $(filter %.cpp, $^) -o $@ $(INCLUDE)