#ifndef CWINAPIHANDLER_H
#define CWINAPIHANDLER_H

#include <Windows.h>

class CWinAPIHandler
{
public:
	CWinAPIHandler();
	~CWinAPIHandler();

	void HideCursor() const;

	void DrawPoint( short _X, short _Y, char ch ) const;

private:
	HANDLE m_console_output_handle;

};

#endif // CWINAPIHANDLER_H
