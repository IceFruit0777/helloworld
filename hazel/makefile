include ../commakefile

all: $(DIR_OBJ) $(OBJ) $(DIR_LIB)
	ar rcs $(DIR_LIB)/libhazel.a $(filter %.o, $^)
	g++ -shared $(filter %.o, $^) -o $(DIR_LIB)/libhazel.so
$(DIR_OBJ)/%.o:
	g++ -E $(filter %.cpp, $^) -o $(@:.o=.i) $(INCLUDE)
	g++ -c -fpic $(filter %.cpp, $^) -o $@ $(INCLUDE) #-fpic(position independent code)