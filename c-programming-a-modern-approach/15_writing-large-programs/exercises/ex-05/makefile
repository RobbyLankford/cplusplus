CC=gcc
CFLAGS=-Wall -g

SRCS = main.c f1.c f2.c
HEADERS = f1.h f2.h

OBJS = main.o f1.o f2.o

TGT = demo

$(TGT): $(OBJS)
	$(CC) $(CFLAGS) -o $(TGT) $(OBJS)

main.o: main.c f1.h
	$(CC) -c main.c $(CFLAGS)

f1.o: f1.c f1.h f2.h
	$(CC) -c f1.c $(CFLAGS)

f2.o: f2.c f1.h f2.h
	$(CC) -c f2.c $(CFLAGS)

clean:
	rm -f $(OBJS) $(TGT)