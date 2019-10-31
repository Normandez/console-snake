#ifndef SCONTEXT_H
#define SCONTEXT_H

enum WALL_DIRECTION
{
	WALL_DIRECTION_Vertical,		// 0
	WALL_DIRECTION_Horizontal		// 1
};

enum MOVE_DIRECTION
{
	MOVE_DIRECTION_Left,
	MOVE_DIRECTION_Right,
	MOVE_DIRECTION_Up,
	MOVE_DIRECTION_Down
};

struct GAME_COORD
{
	short X;
	short Y;

	GAME_COORD( short _x, short _y ) : X(_x), Y(_y){}
};

#endif // SCONTEXT_H
