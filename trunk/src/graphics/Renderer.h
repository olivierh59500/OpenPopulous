/********************************************************************** 
  This file is part of OpenPop

  OpenPop is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  any later version.

  OpenPop is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OpenPop.  If not, see <http://www.gnu.org/licenses/>.
***********************************************************************/

#ifndef _GRAPHICS_RENDERER_H_
#define _GRAPHICS_RENDERER_H_

#include <d3d9.h>
#include <string>

namespace Graphics
{
class Surface;
class PaletteFile;
class SpriteFile;
class RawFile;
class Font;
class Renderer
{
public:
	HWND					hWnd;
	LPDIRECT3D9				mD3D;
	LPDIRECT3DDEVICE9		mD3DDEV;
	LPDIRECT3DSURFACE9		mBackBuffer;
	Surface*				mForeground;

	Renderer();
	~Renderer();

	int Init();
	bool StartDraw();
	void EndDraw();
	void Close();

	int CreateSurface(LPDIRECT3DSURFACE9& surface, int width, int height);
	void BlitSurface(Surface* surface, RECT rect);
	void DrawSprite(PaletteFile* pal, SpriteFile* sfile, int index, int x, int y);
	void DrawRAW(PaletteFile* pal, RawFile* raw, int x, int y);
	void DrawString(Font* font, std::string, int x, int y);

private:
	bool mDrawing;
};

}

#endif