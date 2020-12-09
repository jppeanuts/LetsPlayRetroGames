#include <genesis.h>
#include <string.h>

int main()
{
	u16 x1, y1;
	u16 pad1;
	char str_x[12], str_y[12];

	x1 = y1 = 0;

	VDP_drawTextBG(VDP_BG_B, "BG-B", 0, 14);
	strcpy(str_x, "x:00000000");
	strcpy(str_y, "y:00000000");

	while(1)
	{
		pad1 = JOY_readJoypad(JOY_1);
		if (pad1 & BUTTON_UP) y1--;
		if (pad1 & BUTTON_DOWN) y1++;
		if (pad1 & BUTTON_LEFT) x1--;
		if (pad1 & BUTTON_RIGHT) x1++;
		intToHex(x1, str_x+2, 8);
		intToHex(y1, str_y+2, 8);

        VDP_waitVSync();
		VDP_drawTextBG(VDP_BG_A, str_x, 0, 0);
		VDP_drawTextBG(VDP_BG_A, str_y, 0, 1);
        VDP_setHorizontalScroll(BG_A, x1);
        VDP_setVerticalScroll(BG_A, y1);
	}

	return (0);
}
