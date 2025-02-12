#include <stdio.h>

short literal_sublime(char* lil,char sub) {
	char num;
	sscanf(lil,"%d",&num);
	
	return num;
}

short draw_sublime(char *lil, short height) {
	char i = 0;
	
	short exact = literal_sublime(lil,0);
	printf("%s", " *****************");
	/* Draw each-port */
	for (i;i <= height;i++) {
		if(i==2) {
			printf("%s", "*   LITERAL        # *\n");
		}
		if(i>5) {
			printf("%s", "* @                ");
		} else {
			printf("%s", "*                 ");
		}
		if(i==exact) {
			printf("%i", exact);
		} else {
			printf("%s", "@");
		}
		
		printf("%s","  *\n");
	}
	printf("%s", " *********************\n >>_");
	return exact;
}

int draw(char*lil) {
	system("clear");
	printf("%s", "SUBLIME BOARD\n");
	short sub = draw_sublime(lil,10);
	scanf("%s",lil);
	printf("%s", "\n >> sublime.literal(");
	printf("%d",sub);
	printf("%s","^1) -- ");
	return draw(lil);
}

int main() {
	char lil[100];
	return draw(lil);
}

/*
13^1;
board.powerOn(13);
board.blink();
*/
