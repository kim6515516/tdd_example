CC = gcc
CFLAGS = -W -Wall -O2
LDFLAGS = -lm

all : main getFileSystemsInfo		
		$(CC) $(CFLAGS) -o main main.o getFileSystemsInfo.o $(LDFLAGS)
main : main.c
		$(CC) $(CFLAGS) -c main.c

getFileSystemsInfo : getFileSystemsInfo.c
		$(CC) $(CFLAGS) -c getFileSystemsInfo.c

clean  :
		@rm -rf *.o main *~
