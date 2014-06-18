// PlayerObject.cpp

#include "stdafx.h"
#include "PlayerObject.h"
#include "Input.h"
#include "Sprite.h"


//using namespace sf;

PlayerObject::PlayerObject(sf::Texture* texture, float radius)
	: GameObject(texture, radius)
{
	m_speed = 70000;
	m_org_speed = m_speed;
	m_pi = 3.14159265359f;
	m_maxHP = 1;
	m_currentHP = 0;

	m_sprite->setScale(0.7f, 0.7f);
	m_sprite->setOrigin((m_sprite->getLocalBounds().width / 2) - 2, (m_sprite->getLocalBounds().height / 2) + 32);
}

void PlayerObject::Update(float deltatime, float global_speed)
{
	//////////Movement you only need to move left and right in space invaders
	
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
			m_sprite->move(-5.0f * deltatime * m_speed * global_speed, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
			m_sprite->move(5.0f * deltatime * m_speed * global_speed, 0.0f);
	}

}

float PlayerObject::GetMaxHealth()
{
	return m_maxHP;
}

float PlayerObject::GetCurrentHealth()
{
	
	return m_currentHP;
}

void PlayerObject::SetCurrentHealth(float hp)
{
	m_currentHP = hp;
}
