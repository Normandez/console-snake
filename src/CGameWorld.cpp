#include "CGameWorld.h"

CGameWorld::CGameWorld()
	: m_game_field( 70, 23 )
{
	
}

CGameWorld::~CGameWorld()
{

}

void CGameWorld::Init()
{
	m_game_field.Draw();
}
