/****************************************************************************************** 
 *	Game.h																				  *
	Copyright 2015 –Èª√¥Û—ß <http://www.oxox.work>
 ******************************************************************************************/
#pragma once

#include "D3DGraphics.h"
#include "Keyboard.h"

class Game
{
public:
	Game( HWND hWnd,const KeyboardServer& kServer );
	void Go();
private:
	void ComposeFrame();
	/********************************/
	/*  User Functions              */

	// TODO: User functions go here

	/********************************/
private:
	D3DGraphics gfx;
	KeyboardClient kbd;
	/********************************/
	/*  User Variables              */
	
	// TODO: User variables go here

	/********************************/
};