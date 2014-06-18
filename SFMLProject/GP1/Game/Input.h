// Input.h

#pragma once
#include "stdafx.h"

class Keyboard
{
	friend class Engine;
public:
	Keyboard();

	bool IsDown(int key) const;
	bool IsDownOnce(int key) const;

	void PostUpdate();

private:
	bool m_current[256];
	bool m_previous[256];
};
