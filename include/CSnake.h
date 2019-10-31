#ifndef CSNAKE_H
#define CSNAKE_H

#include "CPoint.h"
#include "SContext.h"

#include <list>

class CWinAPIHandler;

class CSnake
{
public:
	CSnake( CWinAPIHandler* const winapi_handler, GAME_COORD head_coord, char ch_head, char ch_body );
	~CSnake();

	void Draw() const;

private:
	const char m_ch_head;
	const char m_ch_body;

	std::list<CPoint> m_points;

};

#endif // CSNAKE_H
