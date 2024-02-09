default: run

test:
	g++ Testing2.cpp -o tester
	./tester

run:
	g++ background.cpp -o animator.o
	./animator.o
