// Class automatically generated by Dev-C++ New Class wizard

#include "blip.h" // class's header file

// class constructor
Blip::Blip(int type, int startx,int starty)
{
	xloc = startx
	yloc = starty
	id = type
}

// move blip
move_Blip(int xloc2, int yloc2)
{
    grid [xloc2] [yloc2] = this
    grid [xloc] [yloc] = null
}

// class destructor
Blip::~Blip()
{
	grid [yloc] [xloc] = null
}