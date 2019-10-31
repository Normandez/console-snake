#ifndef CGAMEWORLD_H
#define CGAMEWORLD_H

#include "CGameField.h"
#include "CSnake.h"

class CWinAPIHandler;

class CGameWorld
{
public:
	CGameWorld( CWinAPIHandler* const winapi_handler );
	~CGameWorld();

	void Init();

private:
	CGameField m_game_field;
	CSnake m_snake;

};

#endif // CGAMEWORLD_H
