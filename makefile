MAKE = make -C hazel && make -C sandbox
CLEAN = $(subst make, make clean, $(MAKE))

all:
	$(MAKE)
clean:
	$(CLEAN)