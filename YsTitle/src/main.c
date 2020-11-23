#include <genesis.h>
#include "resource.h"

int main()
{
	VDP_setPalette(0, ys_title.palette->data);
	VDP_drawImageEx(BG_B, &ys_title, TILE_ATTR_FULL(PAL0, 0, 0, 0, TILE_USERINDEX), 0, 0, 0, 1);

	while(1)
	{
		VDP_waitVSync();
	}
	return (0);
}
