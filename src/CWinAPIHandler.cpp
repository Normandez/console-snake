#include "CWinAPIHandler.h"

#include <iostream>

CWinAPIHandler::CWinAPIHandler()
{
	m_console_output_handle = ::GetStdHandle(STD_OUTPUT_HANDLE);
}

CWinAPIHandler::~CWinAPIHandler()
{
	::CloseHandle(m_console_output_handle);
}

void CWinAPIHandler::HideCursor() const
{
	CONSOLE_CURSOR_INFO cursor_info;
	cursor_info.dwSize = 100;
	cursor_info.bVisible = FALSE;
	::SetConsoleCursorInfo( m_console_output_handle, &cursor_info );
}

void CWinAPIHandler::DrawPoint( short _X, short _Y, char ch ) const
{
	COORD coord;
	coord.X = _X;
	coord.Y = _Y;
	::SetConsoleCursorPosition( m_console_output_handle, coord );

	::putchar(ch);		// TODO: Bad case handling here maybe !!!
}
