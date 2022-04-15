ifeq ("$(MAKECMDGOALS)", "")
TARGET := _
else
TARGET := $(MAKECMDGOALS)
endif

$(TARGET):
	$(MAKE) $(MAKECMDGOALS) -C hazel
	$(MAKE) $(MAKECMDGOALS) -C sandbox