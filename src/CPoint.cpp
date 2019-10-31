#include "CPoint.h"
#include "CGame.h"

using namespace Game;

CPoint::CPoint( short x, short y, char ch )
	: m_coord( GAMECOORD( x, y ) ),
	  m_ch(ch)
{
	
}

CPoint::CPoint( const GAMECOORD& coord, char ch )
	: m_coord(coord),
	  m_ch(ch)
{

}

CPoint::~CPoint()
{

}

void CPoint::Draw() const
{
	COORD coord;
	coord.X = m_coord.X;
	coord.Y = m_coord.Y;
	::SetConsoleCursorPosition( CONSOLE_HANDLE, coord );

	std::putchar(m_ch);		// TODO: Bad case handling here maybe
}
