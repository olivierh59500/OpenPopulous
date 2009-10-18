#include <stdio.h>
#include "Game.h"
#include "Map.h"
#include "Object.h"
#include "Unit.h"
#include "Sprites.h"
#include "Video.h"

Game* gGame;

Game::Game()
{
	LoadTribeCols();
	LoadMap("levels\\levl2131.dat");
}

Game::~Game()
{

}

void LoadTribeCols(){
	TRIBECOL_NEUTRAL = Sprites::pal -> entry [175 + (8 * 0) + 5]; // neutral tribe starts at 175
	TRIBECOL_BLUE    = Sprites::pal -> entry [215 + (8 * 0) + 5]; // other tribes start at 215
	TRIBECOL_RED     = Sprites::pal -> entry [215 + (8 * 3) + 5]; // 3 = 3rd tribe
	TRIBECOL_YELLOW  = Sprites::pal -> entry [215 + (8 * 2) + 5]; // 5 = entry in gradient
	TRIBECOL_GREEN   = Sprites::pal -> entry [215 + (8 * 1) + 5];
}

void Game::LoadMap(char *filename)
{
	char *buffer;
	int fsize;
	FILE *file;

	file = fopen(filename, "rb");
	
	if (file > 0) {
		//Get file length
		fseek(file, 0, SEEK_END);
		fsize = ftell(file);
		rewind(file);

		//Get buffer
		buffer = (char*)malloc(fsize);
	
		if (!fread(buffer, fsize, 1, file) > 0) {
			//Error loading
			fclose(file);
			return;
		}
		
		LoadOldMapFormat(buffer, fsize);
		free(buffer);
		fclose(file);
	} else {
		//Error loading
		return;
	}
}

void Game::LoadNewMapFormat(char *buffer, int length)
{

}

void Game::LoadOldMapFormat(char *buffer, int length)
{
	int pos = 0;

	mMap = new Map();

	//Setup land size, array and then copy the heights over
	mMap->InitMap(128);

	unsigned short *lb = (unsigned short*)(buffer);
	
	for (int y = 0; y < 128; y++) {
		for (int x = 0; x < 128; x++) {
			mMap->SetLandHeight(x, y, lb[(y * 128) + x]);
		}
	}

	pos = 0x14043;

	for (int i = 0; i < 2000; i++) {
		char type = buffer[pos];
		char group = buffer[pos + 1];
		
		Object* obj = 0;

		if(group == GROUP_UNIT){
			obj = new Unit(type);
		}else if(group == GROUP_BUILDING){
			obj = new Building(type);
		}

		if(obj != 0){
			obj->mTribe = (unsigned char)buffer[pos + 2];
			obj->mX =     (unsigned char)buffer[pos + 4];
			obj->mZ =     (unsigned char)buffer[pos + 6];
	
			mMap->AddObject(obj);
		}

		pos += 55;
	}
}

void Game::Update()
{
	mMap->Update();
}