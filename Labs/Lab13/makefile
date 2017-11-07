# averages

averages: averages.o tableutil.o tablecalc.o
	cc averages.o tableutil.o tablecalc.o -o averages

averages.o: averages.c

averages.c: tableutil.c tablecalc.c

tableutil.o: tableutil.h

tablecalc.o: tablecalc.h

# water

water: water.o reading.o meter.o
	cc water.o reading.o meter.o -o water

water.o: water.c water.h

reading.o: reading.h

meter.o: meter.h

clean:
	rm -f *.o

real_clean: clean
	rm - f averages water


