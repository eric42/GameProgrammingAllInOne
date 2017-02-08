#include <stdlib.h>
#include <allegro.h>

int main(){
	int allegro_init();
	extern char allegro_id[];
	printf("Allegro version = %s\n", allegro_id);
	printf("\nPress any key...\n");
	system("pause");
	return 0;
}
END_OF_MAIN()
