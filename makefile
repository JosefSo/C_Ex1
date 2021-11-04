CC = gcc
AR = ar
OBJECTS_MAIN = main.o 

OBJECTS_LOOPS= basicClassification.o advancedClassificationLoop.o
OBJECTS_REC= basicClassification.o advancedClassificationRecursion.o


FLAGS= -Wall -g 

all: libclassloops.a libclassloops.so libclassrec.a libclassrec.so mains maindloop maindrec
loops: libclassloops.a 
loopd: libclassloops.so
recursives: libclassrec.a
recursived: libclassrec.so
mains: libclassrec.a mains
maindloop: libclassloops.so maindloop
maindrec: libclassrec.so maindrec

libclassloops.a: $(OBJECTS_LOOPS)
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOPS)
libclassloops.so: $(OBJECTS_LOOPS)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOPS)
libclassrec.a: $(OBJECTS_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_REC)
libclassrec.so: $(OBJECTS_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_REC)

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so

.PHONY: clean all loops loopd recursuves recursuved mains maindloop maindrec 

clean: 
	rm -f *.o *.a *.so mains maindloop maindrec 