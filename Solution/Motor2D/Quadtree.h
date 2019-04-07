#ifndef __QUADTREE_H__
#define __QUADTREE_H__

#include "p2Defs.h"
#include "p2Log.h"
#include "SDL/include/SDL.h"

class Quadtree 
{
public:
	//Constructor
	Quadtree(uint max_levels, SDL_Rect area, uint level);

	~Quadtree();
	//subdivide the node into 4 subnodes
	virtual void Subdivide() {};

	void Draw() const {};

	bool CheckIn(SDL_Rect rect);
protected:
	
	uint max_levels;		//Max number of levels a quadtree will have
	uint level;				//Position in the tree
	SDL_Rect area;		//Position and size
	bool isDivided;			//true when have subnodes
	
};

#endif // !__QUADTREE_H__
