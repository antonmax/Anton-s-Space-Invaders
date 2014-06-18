// SpriteObject.h

#pragma once
#include "stdafx.h"
#include "GameObject.h"
#include <map>
#include <string>


//class Sprite;
class Collider;

class SpriteObject : public GameObject
{
public:
	SpriteObject(sf::Texture* texture);
	~SpriteObject();
private:

};