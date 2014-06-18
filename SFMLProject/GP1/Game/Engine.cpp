#include "stdafx.h"
#include "Engine.h"
#include "GameObject.h"
#include "PlayerObject.h"
#include <cmath>
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

#define RIGHT_BORDER 725
#define LEFT_BORDER 25
#define TOP_BORDER 0
#define BOTTOM_BORDER 600
#define SPAWN_POS1 350

Engine::Engine(){
}

Engine::~Engine(){

}

void Engine::Initialize(){
	srand((unsigned int) time(0));
	

	/*
	AnimatedSprite* spritePlayer = m_sprite_manager->Load("../data/animations/player_idle.txt");
	m_player->AddAnimation("Idle", spritePlayer);
	*/
}
void Engine::Run(){
	StateManager mgr;
	mgr.Attach(new GameState());
		/*mgr.Attach(new MenuState());
		
		mgr.Attach(new GameOverState());*/
		mgr.SetState("GameState");
		
		mgr.isRunning = true;

		
			m_window = new sf::RenderWindow(sf::VideoMode(800,600,32), "Space Invaders ");
			
	

		while (mgr.IsRunning())
		{

			//system("cls");
			
			mgr.Update(m_deltatime, *m_window, m_view);
		
			
		}

	//mgr.~StateManager();
}
void Engine::Cleanup(){
}