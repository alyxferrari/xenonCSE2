// Released under the MIT licence.
// See LICENCE.txt for details.

#include "Resource.h"

#include <stddef.h>
#include <string.h>
#include <fstream>
#include <iostream>

unsigned char* readFile(const char* filename) {
	std::ifstream istrm(filename, std::ifstream::in);
	std::string contents((std::istreambuf_iterator<char>(istrm)), std::istreambuf_iterator<char>());
	return (unsigned char*) contents.c_str();
}

static const unsigned char* rCredit01 = readFile("game:\\Resource\\BITMAP\\Credit01.bmp");
static const unsigned char* rCredit02 = readFile("game:\\Resource\\BITMAP\\Credit02.bmp");
static const unsigned char* rCredit03 = readFile("game:\\Resource\\BITMAP\\Credit03.bmp");
static const unsigned char* rCredit04 = readFile("game:\\Resource\\BITMAP\\Credit04.bmp");
static const unsigned char* rCredit05 = readFile("game:\\Resource\\BITMAP\\Credit05.bmp");
static const unsigned char* rCredit06 = readFile("game:\\Resource\\BITMAP\\Credit06.bmp");
static const unsigned char* rCredit07 = readFile("game:\\Resource\\BITMAP\\Credit07.bmp");
static const unsigned char* rCredit08 = readFile("game:\\Resource\\BITMAP\\Credit08.bmp");
static const unsigned char* rCredit09 = readFile("game:\\Resource\\BITMAP\\Credit09.bmp");
static const unsigned char* rCredit10 = readFile("game:\\Resource\\BITMAP\\Credit10.bmp");
static const unsigned char* rCredit11 = readFile("game:\\Resource\\BITMAP\\Credit11.bmp");
static const unsigned char* rCredit12 = readFile("game:\\Resource\\BITMAP\\Credit12.bmp");
static const unsigned char* rCredit14 = readFile("game:\\Resource\\BITMAP\\Credit14.bmp");
static const unsigned char* rCredit15 = readFile("game:\\Resource\\BITMAP\\Credit15.bmp");
static const unsigned char* rCredit16 = readFile("game:\\Resource\\BITMAP\\Credit16.bmp");
static const unsigned char* rCredit17 = readFile("game:\\Resource\\BITMAP\\Credit17.bmp");
static const unsigned char* rCredit18 = readFile("game:\\Resource\\BITMAP\\Credit18.bmp");
#ifdef JAPANESE
static const unsigned char* rpixel = readFile("game:\\Resource\\BITMAP\\pixel_jp.bmp");
#else
static const unsigned char* rpixel = readFile("game:\\Resource\\BITMAP\\pixel.bmp");
#endif
static const unsigned char* rCURSOR_IKA = readFile("game:\\Resource\\CURSOR\\CURSOR_IKA.png");
static const unsigned char* rCURSOR_NORMAL = readFile("game:\\Resource\\CURSOR\\CURSOR_NORMAL.png");
#ifndef _WIN32
static const unsigned char* rICON_MINI = readFile("game:\\Resource\\ICON\\ICON_MINI.png");
#endif
static const unsigned char* rAccess = readFile("game:\\Resource\\ORG\\Access.org");
static const unsigned char* rAnzen = readFile("game:\\Resource\\ORG\\Anzen.org");
static const unsigned char* rBalcony = readFile("game:\\Resource\\ORG\\Balcony.org");
static const unsigned char* rBallos = readFile("game:\\Resource\\ORG\\Ballos.org");
static const unsigned char* rBreakDown = readFile("game:\\Resource\\ORG\\BreakDown.org");
static const unsigned char* rCemetery = readFile("game:\\Resource\\ORG\\Cemetery.org");
static const unsigned char* rCurly = readFile("game:\\Resource\\ORG\\Curly.org");
static const unsigned char* rDr = readFile("game:\\Resource\\ORG\\Dr.org");
static const unsigned char* rEnding = readFile("game:\\Resource\\ORG\\Ending.org");
static const unsigned char* rEscape = readFile("game:\\Resource\\ORG\\Escape.org");
static const unsigned char* rFanfale1 = readFile("game:\\Resource\\ORG\\Fanfale1.org");
static const unsigned char* rFanfale2 = readFile("game:\\Resource\\ORG\\Fanfale2.org");
static const unsigned char* rFanfale3 = readFile("game:\\Resource\\ORG\\Fanfale3.org");
static const unsigned char* rFireEye = readFile("game:\\Resource\\ORG\\FireEye.org");
static const unsigned char* rGameover = readFile("game:\\Resource\\ORG\\Gameover.org");
static const unsigned char* rGinsuke = readFile("game:\\Resource\\ORG\\Ginsuke.org");
static const unsigned char* rGrand = readFile("game:\\Resource\\ORG\\Grand.org");
static const unsigned char* rGravity = readFile("game:\\Resource\\ORG\\Gravity.org");
static const unsigned char* rHell = readFile("game:\\Resource\\ORG\\Hell.org");
static const unsigned char* rironH = readFile("game:\\Resource\\ORG\\ironH.org");
static const unsigned char* rJenka = readFile("game:\\Resource\\ORG\\Jenka.org");
static const unsigned char* rJenka2 = readFile("game:\\Resource\\ORG\\Jenka2.org");
static const unsigned char* rKodou = readFile("game:\\Resource\\ORG\\Kodou.org");
static const unsigned char* rLastBtl3 = readFile("game:\\Resource\\ORG\\LastBtl3.org");
static const unsigned char* rLastBtl = readFile("game:\\Resource\\ORG\\LastBtl.org");
static const unsigned char* rLastCave = readFile("game:\\Resource\\ORG\\LastCave.org");
static const unsigned char* rMarine = readFile("game:\\Resource\\ORG\\Marine.org");
static const unsigned char* rMaze = readFile("game:\\Resource\\ORG\\Maze.org");
static const unsigned char* rMDown2 = readFile("game:\\Resource\\ORG\\MDown2.org");
static const unsigned char* rMura = readFile("game:\\Resource\\ORG\\Mura.org");
static const unsigned char* rOside = readFile("game:\\Resource\\ORG\\Oside.org");
static const unsigned char* rPlant = readFile("game:\\Resource\\ORG\\Plant.org");
static const unsigned char* rquiet = readFile("game:\\Resource\\ORG\\quiet.org");
static const unsigned char* rRequiem = readFile("game:\\Resource\\ORG\\Requiem.org");
static const unsigned char* rToroko = readFile("game:\\Resource\\ORG\\Toroko.org");
static const unsigned char* rVivi = readFile("game:\\Resource\\ORG\\Toroko.org");
static const unsigned char* rWanpak2 = readFile("game:\\Resource\\ORG\\Wanpak2.org");
static const unsigned char* rWanpaku = readFile("game:\\Resource\\ORG\\Wanpak2.org");
static const unsigned char* rWeed = readFile("game:\\Resource\\ORG\\Weed.org");
static const unsigned char* rWhite = readFile("game:\\Resource\\ORG\\White.org");
static const unsigned char* rXXXX = readFile("game:\\Resource\\ORG\\XXXX.org");
static const unsigned char* rZonbie = readFile("game:\\Resource\\ORG\\Zonbie.org");
static const unsigned char* rWave = readFile("game:\\Resource\\WAVE\\Wave.dat");

static const struct
{
	const char *type;
	const char *name;
	const unsigned char *data;
	size_t size;
} resources[] = {
	{"BITMAP", "CREDIT01", rCredit01, sizeof(rCredit01)},
	{"BITMAP", "CREDIT02", rCredit02, sizeof(rCredit02)},
	{"BITMAP", "CREDIT03", rCredit03, sizeof(rCredit03)},
	{"BITMAP", "CREDIT04", rCredit04, sizeof(rCredit04)},
	{"BITMAP", "CREDIT05", rCredit05, sizeof(rCredit05)},
	{"BITMAP", "CREDIT06", rCredit06, sizeof(rCredit06)},
	{"BITMAP", "CREDIT07", rCredit07, sizeof(rCredit07)},
	{"BITMAP", "CREDIT08", rCredit08, sizeof(rCredit08)},
	{"BITMAP", "CREDIT09", rCredit09, sizeof(rCredit09)},
	{"BITMAP", "CREDIT10", rCredit10, sizeof(rCredit10)},
	{"BITMAP", "CREDIT11", rCredit11, sizeof(rCredit11)},
	{"BITMAP", "CREDIT12", rCredit12, sizeof(rCredit12)},
	{"BITMAP", "CREDIT14", rCredit14, sizeof(rCredit14)},
	{"BITMAP", "CREDIT15", rCredit15, sizeof(rCredit15)},
	{"BITMAP", "CREDIT16", rCredit16, sizeof(rCredit16)},
	{"BITMAP", "CREDIT17", rCredit17, sizeof(rCredit17)},
	{"BITMAP", "CREDIT18", rCredit18, sizeof(rCredit18)},
	{"BITMAP", "PIXEL", rpixel, sizeof(rpixel)},
	{"CURSOR", "CURSOR_IKA", rCURSOR_IKA, sizeof(rCURSOR_IKA)},
	{"CURSOR", "CURSOR_NORMAL", rCURSOR_NORMAL, sizeof(rCURSOR_NORMAL)},
#ifndef _WIN32
	{"ICON", "ICON_MINI", rICON_MINI, sizeof(rICON_MINI)},
#endif
	{"ORG", "ACCESS", rAccess, sizeof(rAccess)},
	{"ORG", "ANZEN", rAnzen, sizeof(rAnzen)},
	{"ORG", "BALCONY", rBalcony, sizeof(rBalcony)},
	{"ORG", "BALLOS", rBallos, sizeof(rBallos)},
	{"ORG", "BDOWN", rBreakDown, sizeof(rBreakDown)},
	{"ORG", "CEMETERY", rCemetery, sizeof(rCemetery)},
	{"ORG", "CURLY", rCurly, sizeof(rCurly)},
	{"ORG", "DR", rDr, sizeof(rDr)},
	{"ORG", "ENDING", rEnding, sizeof(rEnding)},
	{"ORG", "ESCAPE", rEscape, sizeof(rEscape)},
	{"ORG", "FANFALE1", rFanfale1, sizeof(rFanfale1)},
	{"ORG", "FANFALE2", rFanfale2, sizeof(rFanfale2)},
	{"ORG", "FANFALE3", rFanfale3, sizeof(rFanfale3)},
	{"ORG", "FIREEYE", rFireEye, sizeof(rFireEye)},
	{"ORG", "GAMEOVER", rGameover, sizeof(rGameover)},
	{"ORG", "GINSUKE", rGinsuke, sizeof(rGinsuke)},
	{"ORG", "GRAND", rGrand, sizeof(rGrand)},
	{"ORG", "GRAVITY", rGravity, sizeof(rGravity)},
	{"ORG", "HELL", rHell, sizeof(rHell)},
	{"ORG", "IRONH", rironH, sizeof(rironH)},
	{"ORG", "JENKA", rJenka, sizeof(rJenka)},
	{"ORG", "JENKA2", rJenka2, sizeof(rJenka2)},
	{"ORG", "KODOU", rKodou, sizeof(rKodou)},
	{"ORG", "LASTBT3", rLastBtl3, sizeof(rLastBtl3)},
	{"ORG", "LASTBTL", rLastBtl, sizeof(rLastBtl)},
	{"ORG", "LASTCAVE", rLastCave, sizeof(rLastCave)},
	{"ORG", "MARINE", rMarine, sizeof(rMarine)},
	{"ORG", "MAZE", rMaze, sizeof(rMaze)},
	{"ORG", "MDOWN2", rMDown2, sizeof(rMDown2)},
	{"ORG", "MURA", rMura, sizeof(rMura)},
	{"ORG", "OSIDE", rOside, sizeof(rOside)},
	{"ORG", "PLANT", rPlant, sizeof(rPlant)},
	{"ORG", "QUIET", rquiet, sizeof(rquiet)},
	{"ORG", "REQUIEM", rRequiem, sizeof(rRequiem)},
	{"ORG", "TOROKO", rToroko, sizeof(rToroko)},
	{"ORG", "VIVI", rVivi, sizeof(rVivi)},
	{"ORG", "WANPAK2", rWanpak2, sizeof(rWanpak2)},
	{"ORG", "WANPAKU", rWanpaku, sizeof(rWanpaku)},
	{"ORG", "WEED", rWeed, sizeof(rWeed)},
	{"ORG", "WHITE", rWhite, sizeof(rWhite)},
	{"ORG", "XXXX", rXXXX, sizeof(rXXXX)},
	{"ORG", "ZONBIE", rZonbie, sizeof(rZonbie)},
	{"WAVE", "WAVE100", rWave, sizeof(rWave)},
	{"DUMMY", "DUMMY", NULL, 0} // Just here to prevent errors in the event that the array is otherwise empty
};

const unsigned char* FindResource(const char *name, const char *type, size_t *size)
{
	for (size_t i = 0; i < sizeof(resources) / sizeof(resources[0]); ++i)
	{
		if (!strcmp(name, resources[i].name) && !strcmp(type, resources[i].type))
		{
			if (size != NULL)
				*size = resources[i].size;

			return resources[i].data;
		}
	}

	return NULL;
}
