#include "CGameField.h"

//=========================<CGameField>=========================
CGameField::CGameField( CWinAPIHandler* const winapi_handler, short width, short height, char wall_ch /*= '#'*/ )
	: m_is_drawn(false),
	  m_width(width),
	  m_height(height),
	  m_wall_ch(wall_ch)
{
	m_walls.reserve(4);
	m_walls.push_back( CWall( winapi_handler, WALL_DIRECTION_Horizontal, GAME_COORD( 0, 0 ), GAME_COORD( m_width, 0 ), m_wall_ch ) );
	m_walls.push_back( CWall( winapi_handler, WALL_DIRECTION_Horizontal, GAME_COORD( 0, m_height ), GAME_COORD( m_width, m_height ), m_wall_ch ) );
	m_walls.push_back( CWall( winapi_handler, WALL_DIRECTION_Vertical, GAME_COORD( 0, 0 ), GAME_COORD( 0, m_height ), m_wall_ch ) );
	m_walls.push_back( CWall( winapi_handler, WALL_DIRECTION_Vertical, GAME_COORD( m_width, 0 ), GAME_COORD( m_width, m_height ), m_wall_ch ) );
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
