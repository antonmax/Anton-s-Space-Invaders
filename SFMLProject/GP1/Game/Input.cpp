// Input.cpp

#include "stdafx.h"
#include "Input.h"

Keyboard::Keyboard()
{
	for (int i = 0; i < 256; i++)
	{
		m_current[i] = false;
		m_previous[i] = false;
	}
}

bool Keyboard::IsDown(int key) const
{
	return m_current[key];
}

bool Keyboard::IsDownOnce(int key) const
{
	return m_current[key] && !m_previous[key];
}

void Keyboard::PostUpdate()
{
	for (int i = 0; i < 256; i++)
	{
		m_previous[i] = m_current[i];
	}
}

