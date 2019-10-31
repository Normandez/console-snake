#include "CGameWorld.h"

CGameWorld::CGameWorld( CWinAPIHandler* const winapi_handler )
	: m_game_field( winapi_handler, 70, 23 ),
	  m_snake( winapi_handler, GAME_COORD( 35, 11 ), '$', '*' )
{
	
}

CGameWorld::~CGameWorld()
{

}

void CGameWorld::Init()
{
	m_game_field.Draw();
	m_snake.Draw();
}
