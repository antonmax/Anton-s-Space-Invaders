#include "stdafx.h"
#include "GameState.h"
#include "PlayerObject.h"
#include "SpriteObject.h"

#include <cmath>
#include <iostream>

GameState::GameState()
{
sf::Event event;
sf::Clock Clock;
sf::Clock bulletClock[3];
bool bulletExists[1] = {false};
}

bool GameState::Enter()
{
	/////////////////////TEXTURE/////////////////////////////////////////////////
	if (!m_background_texture.loadFromFile("../data/texture/night-sky-stars.jpeg"))
	{
		// This shit shouldn't happen
	}
	m_background_texture.setSmooth(true);

	if (!m_ship_texture.loadFromFile("../data/texture/Ship.png"))
	{
		// Shit happened
	}
	m_ship_texture.setSmooth(true);

	m_background = new SpriteObject(&m_background_texture);
	m_ship = new PlayerObject(&m_ship_texture, float(128.0f));
	m_ship->SetPosition(sf::Vector2f(200.0f, 200.0f));

	return true;
}

bool GameState::Update(float deltatime, sf::RenderWindow& m_window, sf::View &m_view)
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{

		if (event.type == sf::Event::Closed)
		{
			m_window.close();
			return false;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			m_window.close();
			return false;
		}
		m_background->GetSprite()->setScale(0.4f, 0.4f);
	}

	m_window.setView(m_view);

	//m_ship->SetPosition(sf::Vector2f(m_view.getCenter().x - (m_view.getSize().x / 2), m_view.getCenter().y - 400 + (m_view.getSize().y / 2)));

	m_window.clear(sf::Color(0, 0, 0));
	m_background->Draw(&m_window);
	m_ship->Draw(&m_window);

	m_window.display();

	return m_continue;
}

void GameState::Exit()
{
	if (m_background != nullptr)
	{
		delete m_background;
		m_background = nullptr;
	}

	if (m_ship != nullptr)
	{
		delete m_ship;
		m_ship = nullptr;
	}
}

std::string GameState::Next() {
	return m_next_state;
};

bool GameState::IsType(const std::string &type) {
	return type.compare("GameState") == 0;
};