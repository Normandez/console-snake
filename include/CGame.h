#ifndef CGAME_H
#define CGAME_H

#include "CGameWorld.h"

#include <Windows.h>
#include <iostream>

namespace Game
{
	const static HANDLE CONSOLE_HANDLE = ::GetStdHandle(STD_OUTPUT_HANDLE);		// TODO: !!!INVALID_HANDLE_VALUE handling should add here!!!
};

class CGame
{
public:
	CGame();
	~CGame();

	void Init();

private:
	CGameWorld m_game_world;

};

#endif // CGAME_H
