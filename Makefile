all: compile link

compile:
	g++ -Isrc/include -c main.cpp

link:
	g++ main.o -o <Your App Name> -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network