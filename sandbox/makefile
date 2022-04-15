INCLUDE := -I ../hazel/include -I ../hazel/vendor/spdlog/include

include ../commakefile

all: $(DIR_OBJ) $(OBJ) $(DIR_BIN)
	g++ $(filter %.o, $^) -o $(DIR_BIN)/sandbox -L ../hazel/lib -lhazel
obj/%.o:
	g++ -E $< -o $(@:.o=.i) $(INCLUDE)
	g++ -c $< -o $@ $(INCLUDE)