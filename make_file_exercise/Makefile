program: program.o weatherstats.o archive
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.o -L. -lweather -o program 
#	gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.o weatherstats.o -o program
# compile with library:
# gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.o -L. -lweather -o program // "-L." means that the library is in the current folder
# gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.o libweather.a -o program

# this is how we create an archive library
archive: weatherstats.o weatherio.o
	ar rcs libweather.a weatherstats.o weatherio.o

program.o: program.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c program.c -o program.o
	
weatherstats.o: weatherstats.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c weatherstats.c -o weatherstats.o
	
weatherio.o: weatherio.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c weatherio.c -o weatherio.o

launch: program
	./program

clean:
	rm -f weatherstats.o weatherio.o program.o program libweather.a
	