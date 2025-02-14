#include <stdio.h>
// GOES RANDOMIC BTW
short literal_sublime(char* lil, char sub) {
	char non_literal = 0;
    char token = 0;
	//sscanf(lil,"%d",&num);
	char tok[] = ";";//59
	while(!token) {
        non_literal = non_literal*10+(lil[sub]-48);
		//for(;lil[sub]==tok[token];) {
        for(;lil[sub]>60;) {
		    token = tok[token];
            lil[sub] = 0;
		    //break;
		}
        //num*=10;
        sub++;
	}
	
	return non_literal;
}

short due_to(char *lil, char sub) {
	char mental = literal_sublime(lil, sub);
	return mental;
}

short draw_sublime(char *lil, short height) {
	char i = 0;
	
	short exact = due_to(lil,i);
	/*printf("%s", " *****************");
	/* Draw each-port *
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
	printf("%s", " *********************\n >>_");*/
	return exact;
}

int draw(char*lil, short infinite) {
    while(infinite<10500)
        infinite++;
	system("clear");
	printf("%s", "SUBLIME BOARD\n");
	short fictional_devil = draw_sublime(lil,10);
	//scanf("%s",lil);
	printf("%s", "\n >> sublime.literal(");
	printf("%d",fictional_devil);
	printf("%s","^1) -- ");
	return draw(lil, infinite+1);
}

int main() {
	char lil[] = "1";
	return draw(lil,0);
}

/*
13^1;
1"o, 13^1, 1"o, 13^0;
(13^1,9:00,13^0)"o;
(1^1,,++1^1)"$;
board.powerOn(13);
board.blink();
*/