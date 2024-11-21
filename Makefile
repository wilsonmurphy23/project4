make:
	gcc -Wall -o notjustcats notjustcats.c

run:
	./notjustcats floppys/evidence5.img ./recovered_files

clean:
	rm -f notjustcats
