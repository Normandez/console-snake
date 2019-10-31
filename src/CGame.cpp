#include "CGame.h"

using namespace Game;

CGame::CGame()
{

}

CGame::~CGame()
{

}

void CGame::Init()
{
	CONSOLE_CURSOR_INFO cursor_info;
	cursor_info.dwSize = 100;
	cursor_info.bVisible = FALSE;
	::SetConsoleCursorInfo( CONSOLE_HANDLE, &cursor_info );

	m_game_world.Init();
}
