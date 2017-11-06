/****************************************************************************************** 
 *	D3DGraphics.h																		  *
 *	Copyright 2015 –Èª√¥Û—ß <http://www.oxox.work>								  *
 ******************************************************************************************/
#pragma once

#include <d3d9.h>

class D3DGraphics
{
public:
	D3DGraphics( HWND hWnd );
	~D3DGraphics();
	void PutPixel( int x,int y,int r,int g,int b );
	void BeginFrame();
	void EndFrame();
private:
	IDirect3D9*			pDirect3D;
	IDirect3DDevice9*	pDevice;
};