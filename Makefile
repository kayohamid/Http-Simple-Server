hssd: bootstrap.o 
	g++ -o build/hssd obj/bootstrap.o 

obj/bootstrap.o: src/bootstrap.cpp
	g++ -c -o obj/bootstrap.o src/bootstrap.cpp

# isso aqui eh para montadores.
