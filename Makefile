notjustcats: notjustcats.c
	gcc -Wall -o notjustcats notjustcats.c

run:
	./notjustcats floppys/simple.img ./recovered_files

clean:
	rm -f notjustcats