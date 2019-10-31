#ifndef CGAME_H
#define CGAME_H

#include "CWinAPIHandler.h"
#include "CGameWorld.h"

class CGame
{
public:
	CGame();
	~CGame();

	void Init();

private:
	CWinAPIHandler* m_winapi_handler;

	CGameWorld m_game_world;

};

#endif // CGAME_H
