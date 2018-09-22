Main:	examen2.o Item.o Jugador.o Bomba.o Obstaculo.o
	g++ examen2.o Item.o Jugador.o Bomba.o Obstaculo.o -o Main

examen2.o:	examen2.cpp
	g++ -c examen2.cpp

Item.o:	Item.h Item.cpp
	g++ -c Item.cpp

Jugador.o:	Jugador.h Jugador.cpp Item.h Item.cpp
	g++ -c Jugador.cpp

Bomba.o:	Bomba.h Bomba.cpp Item.h Item.cpp
	g++ -c Bomba.cpp

Obstaculo.o: 	Obstaculo.h Obstaculo.cpp Item.h Item.cpp
	g++ -c Obstaculo.cpp

