slither : main.cpp ui.cpp game.cpp
	g++ main.cpp ui.cpp game.cpp -lncurses -o slither && ./slither


cls : 
	rm -f slither