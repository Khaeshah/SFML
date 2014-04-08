all: joc

joc: src/main.cpp src/Game.cpp
	g++ -gstabs+ -o prog.x src/main.cpp src/Game.cpp -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-network -lsfml-system

clean: 
	rm prog.x *.o
