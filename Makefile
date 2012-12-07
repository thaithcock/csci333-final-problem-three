CC = g++
CFLAGS = -Wextra

nice: naughtyNice.cpp
	$(CC) $(CFLAGS) -c $< 

clean:
	rm -f *.o
	rm -f *.gch
