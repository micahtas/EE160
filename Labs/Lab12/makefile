# swap.c 

swap: swaptest.o swap.o
	cc swaptest.o swap.o -o swap

swap.o: swaptest.c

swap.o: swap.h

# swapbig

swapbig: driver.o swap_big.o
	cc driver.o swap_big.o -o swapbig

driver.o: driver.c

swap_big.o: swap2.h

# recorder

recorder: driver2.o recorder.o
	cc driver2.o recorder.o -o recorder

driver2.c: recorder.o

recorder.o: swap3.h

clean:
	rm -f *.o

real_clean: clean
	rm -f swap swapbig recorder
