#include "CGame.h"

CGame::CGame()
	: m_winapi_handler( new CWinAPIHandler() ),
	  m_game_world(m_winapi_handler)
{

}

CGame::~CGame()
{
	delete m_winapi_handler;
}

void CGame::Init()
{
	m_winapi_handler->HideCursor();
	m_game_world.Init();
}
