#ifndef CWALL_H
#define CWALL_H

#include "CPoint.h"

#include <vector>

class CWinAPIHandler;

enum DIRECTION
{
	DIRECTION_Vertical,		// 0
	DIRECTION_Horizontal	// 1
};

class CWall
{

public:
	CWall( CWinAPIHandler* const winapi_handler, DIRECTION direction, const GAMECOORD& start, const GAMECOORD& end, char ch );
	~CWall();

	void Draw();

private:
	bool m_is_drawn;

	std::vector<CPoint> m_points;
	const DIRECTION m_direction;
	const char m_ch;

};

#endif // CWALL_H
