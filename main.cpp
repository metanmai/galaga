#include <iostream>
#include "src/Game/Game.hpp"

using namespace std;

int main()
{
	Game game;
	cout << "Starting Game..." << endl;
	game.run();

	cout << "Closing Game..." << endl;
	return 0;
}