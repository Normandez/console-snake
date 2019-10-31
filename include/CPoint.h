#ifndef CPOINT_H
#define CPOINT_H

struct GAMECOORD
{
	short X;
	short Y;

	GAMECOORD( short _x, short _y ) : X(_x), Y(_y){}
};

class CPoint
{
public:
	CPoint( short x, short y, char ch );
	CPoint( const GAMECOORD& coord, char ch );
	~CPoint();

	void Draw() const;

private:
	const GAMECOORD m_coord;
	const char m_ch;

};

#endif // CPOINT_H
