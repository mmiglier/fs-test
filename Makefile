
CFLAGS += -std=gnu99

all: test

test: main.o fs_test.o 
	$(LINK.o) $^ $(LOADLIBES) $(LDLIBS) -o $@


clean:
	rm -f *.o
	rm -f test

.PHONY: all clean
