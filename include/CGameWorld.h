#ifndef CGAMEWORLD_H
#define CGAMEWORLD_H

#include "CGameField.h"

class CWinAPIHandler;

class CGameWorld
{
public:
	CGameWorld( CWinAPIHandler* const winapi_handler );
	~CGameWorld();

	void Init();

private:
	CGameField m_game_field;

};

#endif // CGAMEWORLD_H
