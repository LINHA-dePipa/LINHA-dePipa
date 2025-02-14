#include <stdio.h>
// GOES RANDOMIC BTW
#define LIL char

LIL literal_sublime(char* lil, char sub) {
    char non_literal = 0;
    char token = 0;
    //sscanf(lil,"%d",&num);
    char tok[] = ";";//59
    while(lil[sub]<57) {
        non_literal = non_literal*10+(lil[sub]-48);

        //num*=10;
        sub++;
    }

    return non_literal;
}

LIL power(char *lil, char sub, char due, char mental) {
    //mental='^';
    return literal_sublime(lil, sub);
}

LIL due_to(char *lil, char sub, char mental) {
    char due = power(lil, sub, 0, mental);
    return due;
}

void ddd(char*dfault) {
    printf("%s", dfault);
}

LIL draw_sublime(char *lil, short height) {
    char i = 0;

    char exact = due_to(lil,i,exact);
    ddd(" *****************");
    /* Draw each-port */
    for (i; i <= height; i++) {
        if(i==2) {
            ddd("*   LITERAL        # *\n");
        }
        if(i>5) {
            ddd("* @                ");
        } else {
            ddd("*                 ");
        }
        if(i==exact) {
            printf("%i", exact);
        } else {
            ddd("@");
        }

        ddd("  *\n");
    }
    ddd(" *********************\n >>_");
    return exact;
}

int draw(char*lil, short infinite) {
    while(0<infinite-10500)
        infinite++;
    system("clear");
    ddd("SUBLIME BOARD\n");
    LIL fictional_devil = draw_sublime(lil,10);
    scanf("%s",lil);
    ddd("\n >> sublime.literal(");
    printf("%d",fictional_devil);
    ddd("^1) -- ");
    return draw(lil, infinite+1);
}

int main() {
    char lil[] = "13;";
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
