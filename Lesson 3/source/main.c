#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>


int main(int argc, char* argv[])
{
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);
		
	printf("\x1b[47;30mTEXT COLOURS\n");
	printf("\x1b[0m"); // Resets colours by using parameter 0.
	printf("\x1b[30m BLACK 30\n");
	printf("\x1b[31m RED 31\n");
	printf("\x1b[32m GREEN 32\n");
	printf("\x1b[33m YELLOW 33\n");
	printf("\x1b[34m BLUE 34\n");
	printf("\x1b[35m MAGENTA 35\n");
	printf("\x1b[36m CYAN 36\n");
	printf("\x1b[37m WHITE 37\n");
	printf("\n");
	printf("\x1b[47;30mHALF-BRIGHT COLOURS\n");
	printf("\x1b[0m"); // Resets colours by using parameter 0.
	printf("\x1b[2;30m BLACK 30\n");
	printf("\x1b[2;31m RED 31\n");
	printf("\x1b[2;32m GREEN 32\n");
	printf("\x1b[2;33m YELLOW 33\n");
	printf("\x1b[2;34m BLUE 34\n");
	printf("\x1b[2;35m MAGENTA 35\n");
	printf("\x1b[2;36m CYAN 36\n");
	printf("\x1b[2;37m WHITE 37\n");

	
	// Move console to bottom screen.
	consoleInit(GFX_BOTTOM, NULL);
	printf("\x1b[47;30mTEXT COLOURS\n");
	printf("\x1b[30m BLACK 30\n");
	printf("\x1b[31m RED 31\n");
	printf("\x1b[32m GREEN 32\n");
	printf("\x1b[33m YELLOW 33\n");
	printf("\x1b[34m BLUE 34\n");
	printf("\x1b[35m MAGENTA 35\n");
	printf("\x1b[36m CYAN 36\n");
	printf("\x1b[37m WHITE 37\n");
	printf("\n");
	printf("\x1b[47;30mHALF-BRIGHT COLOURS\n");
	printf("\x1b[2;30m BLACK 30\n");
	printf("\x1b[2;31m RED 31\n");
	printf("\x1b[2;32m GREEN 32\n");
	printf("\x1b[2;33m YELLOW 33\n");
	printf("\x1b[2;34m BLUE 34\n");
	printf("\x1b[2;35m MAGENTA 35\n");
	printf("\x1b[2;36m CYAN 36\n");
	printf("\x1b[2;37m WHITE 37\n");


	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		gfxSwapBuffers();
		hidScanInput();
		
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break; // break in order to return to hbmenu
		
	}

	gfxExit();
	return 0;
}