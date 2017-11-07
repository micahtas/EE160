# makefile

# target to create all executables for this lab
all: lvl0

#complete the dependency and action lines for the following targets

lvl0: lvl0.o display.o functions.o
	cc lvl0.o display.o functions.o -o lvl0 -lcurses

# source file dependencies
#  You should fill these in and add any additional targets you need

lvl0.o: display.h

display.o: display.h

functions.o: functions.h

# utility targets

clean:
	mv display.o display.sav
	rm -f *.o
	mv display.sav display.o


real_clean: clean
	rm  -f lvl0  a.out core
