#ifndef CWALL_H
#define CWALL_H

#include "CPoint.h"
#include "SContext.h"

#include <vector>

class CWinAPIHandler;

class CWall
{

public:
	CWall( CWinAPIHandler* const winapi_handler, WALL_DIRECTION direction, const GAME_COORD& start, const GAME_COORD& end, char ch );
	~CWall();

	void Draw();

private:
	bool m_is_drawn;

	std::vector<CPoint> m_points;
	const WALL_DIRECTION m_direction;
	const char m_ch;

};

#endif // CWALL_H
