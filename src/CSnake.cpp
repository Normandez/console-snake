#include "CSnake.h"
#include "CWinAPIHandler.h"

CSnake::CSnake( CWinAPIHandler* const winapi_handler, GAME_COORD head_coord, char ch_head, char ch_body )
	: m_ch_head(ch_head),
	  m_ch_body(ch_body)
{
	m_points.push_back( CPoint( winapi_handler, head_coord, ch_head ) );
	for( short it = 1; it < 5; it++ ) m_points.push_back( CPoint( winapi_handler, GAME_COORD( head_coord.X - it, head_coord.Y ), ch_body ) );
}

CSnake::~CSnake()
{
	m_points.clear();
}

void CSnake::Draw() const
{
	for( auto point : m_points ) point.Draw();
}
