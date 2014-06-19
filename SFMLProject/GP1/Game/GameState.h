#pragma once

#include "stdafx.h"
#include "State.h"

//class CountdownTimer;
class SpriteObject;
class PlayerObject;

class GameState : public State {
public:
	GameState();

	bool Enter();
	void Exit();
	bool Update(float deltatime,sf::RenderWindow& m_window, sf::View &m_view);
	std::string Next();
	bool IsType(const std::string &type);

	/*void EndProgram();
	void Move();
	void Shoot();
	void MoveBullet(int i);
	void MoveNme();*/
private:
	std::string m_next_state;

	//////////Texture and sprite//////
	SpriteObject* m_background;
	sf::Texture m_background_texture;

	//CountdownTimer* m_timer;
	PlayerObject * m_ship;
	sf::Texture m_ship_texture;

	bool m_continue;
};