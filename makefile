strtest: str.c
	gcc str.c -o strtest

run: strtest
	./strtest

clean: 
	rm *~

