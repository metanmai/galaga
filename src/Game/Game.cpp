//
// Created by Tanmai Niranjan on 23/10/23.
//

#include "Game.hpp"

Game::Game()
{
	this->window = new RenderWindow(VideoMode(800, 800), "Galaga", Style::Close | Style::Titlebar);
	this->window->setFramerateLimit(60);
	this->window->setVerticalSyncEnabled(false);

	this->player = new Player;
}

Game::~Game()
{
	delete this->player;
	delete this->window;
}

void Game::run()
{
	while(this->window->isOpen())
	{
		this->update();
		this->render();
	}
}

void Game::update()
{
	Event ev{};
	while(this->window->pollEvent(ev))
		if(ev.type == Event::Closed)
			this->window->close();

	this->player->update();
}

void Game::render()
{
	this->window->clear();
	this->player->render(*this->window);
	this->window->display();
}
