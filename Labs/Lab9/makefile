
# target to make all programs for Lab 9
all: mygrader mygrader2 countgrades

# Problem 1 - grader programs
#	complete the dependency and action lines for your filenames
mygrader: mygrader.o grader.o 
	cc mygrader.o grader.o  -o mygrader

mygrader.o: grader.c

grader.o: grader.h

mygrader2: mygrader2.o grader2.o
	cc mygrader2.o grader2.o  -o mygrader2

mygrader2.o: grader2.c

grader2.o: grader2.h

# Problem 2 - grade counter
countgrades: countgrades.o
	cc -o countgrades countgrades.o

# source file dependencies
#	add target lines showing dependencies for your .o files


# utility targets

clean:
	rm -f *.o

real_clean: clean
	rm -f mygrader mygrader2 countgrades

