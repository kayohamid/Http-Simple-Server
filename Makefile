kss: bootstrap.o 
	g++ -o kss bootstrap.o 

bootstrap.o: bootstrap.cpp
	g++ -c -o bootstrap.o bootstrap.cpp

#preprocess.o: preprocess.cpp
#	g++ -c -o preprocess.o preprocess.cpp

#filemanager.o: filemanager.cpp 
#	g++ -c -o filemanager.o fstreams filemanager.cpp

# nao sei pq mas nao entendi esse makefile ainda, mas ja eh um começo
