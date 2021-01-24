#pragma once
#ifndef _SPACESHIP_H_
#define _SPACESHIP_H_
#include "DisplayObject.h"
#include "TextureManager.h"

class SpaceShip final : public DisplayObject
{
public:

	// constructor
	SpaceShip();
	
	~SpaceShip();
	
	void draw() override;
	void update() override;
	void clean() override;
};

# endif
 