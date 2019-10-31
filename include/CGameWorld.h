#ifndef CGAMEWORLD_H
#define CGAMEWORLD_H

#include "CGameField.h"

class CGameWorld
{
public:
	CGameWorld();
	~CGameWorld();

	void Init();

private:
	CGameField m_game_field;

};

#endif // CGAMEWORLD_H
