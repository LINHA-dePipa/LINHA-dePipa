#include <stdio.h>
// WEIRD BY THE MOMENT
#define LIL char
#define image '@'

LIL Subjudge() {
    static char j = 0;
    j++;
    return j;
}

LIL literal_sublime(char* lil, char sub) {
    char non_literal = 0;
    char token = 0;
    //sscanf(lil,"%d",&num);
    char tok[] = ";";//59
    while(lil[sub]<57) {
        non_literal = non_literal*10+(lil[sub]-48);

        //num*=10;
        sub++;
        Subjudge(sub);
    }
    return non_literal;
}

LIL exige(const char ps1, char ps2) {
    static char remain[666];
    if(ps1!=0)
        remain[ps2] = ps2;
    return remain[ps2];
}

//LIL rebuild(char *lil, char sub, char due, char mental) {
LIL rebuild(char mental, char due, char sub, char*lil) {

    if(mental!=image)
        return due;
        sub++;
        const char twin = literal_sublime(lil, sub);
        while(due<twin) {
            due++;
            printf("%i\n", due);
            exige(twin,due);
            //fine
        } for(;twin<due;) { //dam else :'(
            due--;
            printf("%i\n", due);
            //exige(twin,due);
            //fine
        }
    
    return due;
}

LIL due_to(char *lil, char sub, char mental) {
    sub++;
    mental = lil[sub];
    //char twin = rebuild(lil, Subjudge(-1), literal_sublime(lil, sub), mental);
    char twin = rebuild(mental, literal_sublime(lil, sub), Subjudge()-1, lil);

    return twin;
}

void ddd(char*dfault) {
    printf("%s", dfault);
}

LIL draw_sublime(char *lil, short height) {
    char i = 0;

    char exact = due_to(lil,i,59);
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
            printf("%i", Subjudge());
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
    //scanf("%s",lil);
    ddd("\n >> sublime.literal(");
    printf("%d",fictional_devil);
    ddd("^1) -- ");
    return draw(lil, infinite+1);
}

int main() {
    char lil[] = "55@255;";
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