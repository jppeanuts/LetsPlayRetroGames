#include <genesis.h>

int main()
{
	u16 x0, y0;
	u16 x1, y1;
	u16 pad0, pad1;

	x0 = y0 = x1 = y1 = 0;
	pad0 = 0;

	while(1)
	{
		pad1 = JOY_readJoypad(JOY_1);
		if (pad0 != pad1) {
			pad0 = pad1;
			x0 = x1;
			y0 = y1;
			if (pad1 & BUTTON_UP) y1--;
			if (pad1 & BUTTON_DOWN) y1++;
			if (pad1 & BUTTON_LEFT) x1--;
			if (pad1 & BUTTON_RIGHT) x1++;
		}

		VDP_waitVSync();
		VDP_drawText(" ", x0, y0);
		VDP_drawText("A", x1, y1);
	}
	return (0);
}
