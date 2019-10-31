#include "CPoint.h"
#include "CWinAPIHandler.h"

CPoint::CPoint( CWinAPIHandler* const winapi_handler, short x, short y, char ch )
	: m_winapi_handler(winapi_handler),
	  m_coord( GAME_COORD( x, y ) ),
	  m_ch(ch)
{
	
}

CPoint::CPoint( CWinAPIHandler* const winapi_handler, const GAME_COORD& coord, char ch )
	: m_winapi_handler(winapi_handler),
	  m_coord(coord),
	  m_ch(ch)
{

}

CPoint::~CPoint()
{

}

void CPoint::Draw() const
{
	m_winapi_handler->DrawPoint( m_coord.X, m_coord.Y, m_ch );
}
