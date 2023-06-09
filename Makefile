main: main.o funcs.o caesar.o vigenere.o decryption.o
	g++ -o main main.o funcs.o caesar.o vigenere.o decryption.o

tests: tests.o funcs.o caesar.o vigenere.o decryption.o
	g++ -o tests tests.o funcs.o caesar.o vigenere.o decryption.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o



funcs.o: funcs.cpp funcs.h 

main.o: main.cpp funcs.h caesar.h vigenere.h decryption.h

tests.o: tests.cpp doctest.h funcs.h caesar.h vigenere.h decryption.h

test-ascii.o: test-ascii.cpp

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decryption.o: decryption.cpp decryption.h

clean:
	rm -f main main.o funcs.o tests.o test-ascii.o caesar.o vigenere.o decryption.o
