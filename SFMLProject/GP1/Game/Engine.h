//Enigine.h
#pragma once
#include "stdafx.h"
#include "GameState.h"
#include "StateManager.h"
//#include "GameStateA.h"
//#include "MenuState.h"
//#include "GameOver.h"
	
class PlayerObject;

	class Engine{

public:
	Engine();
	~Engine();
	void Initialize();
	void Run();
	void Cleanup();

private:
	float m_deltatime;
	sf::Clock deltaClock;
	sf::RenderWindow* m_window;
	sf::View m_view;
};