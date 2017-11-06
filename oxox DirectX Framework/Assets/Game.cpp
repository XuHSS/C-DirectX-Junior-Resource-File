/****************************************************************************************** 
 *	Game.cpp																			  *
	Copyright 2015 –Èª√¥Û—ß <http://www.oxox.work>
 ******************************************************************************************/
#include "Game.h"

Game::Game( HWND hWnd,const KeyboardServer& kServer )
:	gfx ( hWnd ),
	kbd( kServer )
{}

void Game::Go()
{
	gfx.BeginFrame();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::ComposeFrame()
{
	// TODO: insert frame drawing code here
	gfx.PutPixel(100, 100, 255, 255, 255);
}