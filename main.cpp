#include<allegro.h>
int main(void){
	allegro_init();
	set_gfx_mode(GFX_SAFE, 640, 480, 0, 0);
	install_keyboard();
	textout_ex(screen, font, "Hello9 World!", 1,1,10,-1);
	textout_ex(screen, font, "Press ESCape to quit.", 1,12,11,-1);
	while(!key[KEY_ESC]);
	allegro_exit();
	return 0;
}
END_OF_MAIN()
