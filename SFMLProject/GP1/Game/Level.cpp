#pragma once
#include "stdafx.h"
#include "Level.h"

Level::Level(){
	m_level = 1;
	m_levels = 1;
	m_score = 0;
}
void Level::Nextlevel()
{
	if (m_level >= 5){
		m_level = 1;
		++m_levels;
	}
	else{
		++m_level;
	}
}
int Level::Getlevel()
{
	return m_level;
}
int Level::Getlevels()
{
	return m_levels;
}
int Level::GetKidsToSpawn()
{
	if (m_levels > 1){
		m_alien_amount = (2 + ((m_level - 1) * 3) - 5) + 5 + (12 * (m_levels - 1));
	}
	else
	{
		m_alien_amount = (2 + ((m_level - 1) * 3) - 4);
	}
	return m_alien_amount;
}
int Level::GetSpecialToSpawn()
{
	if (m_levels > 1){
		m_alien_amount = (2 + (m_level * 3) - 5) + 5 + (12 * (m_levels - 1));
	}
	else
	{
		m_alien_amount = (2 + (m_level * 3) - 4);
	}
	m_special_amount = m_alien_amount / 3 + 1;
	return m_special_amount;
}