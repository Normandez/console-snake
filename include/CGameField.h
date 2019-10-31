#ifndef CGAMEFIELD_H
#define CGAMEFIELD_H

#include "CWall.h"

class CGameField
{
public:
	CGameField( short width, short height, char wall_ch = '#' );
	~CGameField();

	void Draw();

private:
	bool m_is_drawn;

	const short m_width;
	const short m_height;
	const char m_wall_ch;

	std::vector<CWall> m_walls;

};

#endif // CGAMEFIELD_H
