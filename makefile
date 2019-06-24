CC = g++
CFLAG = -std=c++11

test: main.o card.o functions.o
	$(CC) main.o card.o functions.o -o test

main.o: main.cpp card.h functions.h
	$(CC) -c main.cpp $(CFLAG)

card.o: card.cpp card.h
	$(CC) -c card.cpp $(CFLAG)

functions.o: functions.cpp functions.h card.h
	$(CC) -c functions.cpp $(CFLAG)

clean:
	rm *.o test