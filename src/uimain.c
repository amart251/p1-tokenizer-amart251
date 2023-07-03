#include <stdio.h>
#include "draw.h"
int main(){
    puts("This is a test of a simple UI!");

    while (1){
        fputs("Say something funny ;)", stdout);
        fflush(stdout);		/* stdout only flushes automatically on \n */
        int c;
        while ((c = getchar()) == '\n'); /* ignore newlines */
        if (c == EOF)		     /* terminate on end-of-file */
            goto done;

        
    }
}
