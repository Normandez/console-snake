#include "CGameField.h"

//=========================<CGameField>=========================
CGameField::CGameField( short width, short height, char wall_ch /*= '#'*/ )
	: m_is_drawn(false),
	  m_width(width),
	  m_height(height),
	  m_wall_ch(wall_ch)
{
	m_walls.reserve(4);
	m_walls.push_back( CWall( DIRECTION_Horizontal, GAMECOORD( 0, 0 ), GAMECOORD( m_width, 0 ), m_wall_ch ) );
	m_walls.push_back( CWall( DIRECTION_Horizontal, GAMECOORD( 0, m_height ), GAMECOORD( m_width, m_height ), m_wall_ch ) );
	m_walls.push_back( CWall( DIRECTION_Vertical, GAMECOORD( 0, 0 ), GAMECOORD( 0, m_height ), m_wall_ch ) );
	m_walls.push_back( CWall( DIRECTION_Vertical, GAMECOORD( m_width, 0 ), GAMECOORD( m_width, m_height ), m_wall_ch ) );
}

CGameField::~CGameField()
{

}

void CGameField::Draw()
{
	if(!m_is_drawn)
	{
		for( auto wall : m_walls ) wall.Draw();
		m_is_drawn = true;
	}
}
//==================================================
