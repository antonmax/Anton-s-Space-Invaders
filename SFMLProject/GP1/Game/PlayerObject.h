// PlayerObject.h

#pragma once
#include "stdafx.h"
#include "GameObject.h"
#include <map>
#include <string>

class Keyboard;
class Sprite;
//class Collider;
//class AnimatedSprite;

class PlayerObject : public GameObject
{
public:
	PlayerObject(sf::Texture* texture, float radius);

	void Update(float deltatime, float global_speed);
	//void Collision(bool hit);
	int GetMiddle(int width);
	//void AddAnimation(const std::string &name, AnimatedSprite *sprite);
	float GetCurrentHealth();
	float GetMaxHealth();
	void SetCurrentHealth(float hp);

protected:
	Keyboard* m_keyboard;
	int m_speed;
	int m_org_speed;
	float m_pi;
	float m_currentHP;
	float m_maxHP;
	//AnimatedSprite *m_current_animation;
	//std::map<std::string, AnimatedSprite*> m_animations;

};