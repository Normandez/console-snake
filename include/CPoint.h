#ifndef CPOINT_H
#define CPOINT_H

class CWinAPIHandler;

struct GAMECOORD
{
	short X;
	short Y;

	GAMECOORD( short _x, short _y ) : X(_x), Y(_y){}
};

class CPoint
{
public:
	CPoint( CWinAPIHandler* const winapi_handler, short x, short y, char ch );
	CPoint( const GAMECOORD& coord, char ch );
	~CPoint();

	void Draw() const;

private:
	CWinAPIHandler* m_winapi_handler;

	const GAMECOORD m_coord;
	const char m_ch;

};

#endif // CPOINT_H
