#include "CWall.h"

CWall::CWall( CWinAPIHandler* const winapi_handler, DIRECTION direction, const GAMECOORD& start, const GAMECOORD& end, char ch )
	: m_is_drawn(false),
	  m_direction(direction),
	  m_ch(ch)
{
	if( m_direction == DIRECTION_Horizontal )
	{
		m_points.reserve( ( end.X - start.X + 1 ) );
		for( short it = start.X; it <= end.X; it++ )
		{
			m_points.push_back( CPoint( winapi_handler, it, start.Y, m_ch ) );
		}
	}
	else if( m_direction == DIRECTION_Vertical )
	{
		m_points.reserve( ( end.Y - start.Y + 1 ) );
		for( short it = start.Y; it <= end.Y; it++ )
		{
			m_points.push_back( CPoint( winapi_handler, start.X, it, m_ch ) );
		}
	}
}

CWall::~CWall()
{
	m_points.clear();
}

void CWall::Draw()
{
	if(!m_is_drawn)
	{
		for( auto point : m_points ) point.Draw();
		m_is_drawn = true;
	}
}
