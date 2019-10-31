#ifndef CPOINT_H
#define CPOINT_H

#include "SContext.h"

class CWinAPIHandler;

class CPoint
{
public:
	CPoint( CWinAPIHandler* const winapi_handler, short x, short y, char ch );
	CPoint( CWinAPIHandler* const winapi_handler, const GAME_COORD& coord, char ch );
	~CPoint();

	void Draw() const;

private:
	CWinAPIHandler* m_winapi_handler;

	const GAME_COORD m_coord;
	const char m_ch;

};

#endif // CPOINT_H
