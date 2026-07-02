#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int heads = 0, tails = 0;
    int i;

    srand(time(NULL));

    char name[100];
    printf("Who are you?\n> ");
    scanf("%99s", name);
    printf("Hello, %s!\n", name);
    
    printf("Tossing a coin...\n");
    for(i=0;i<3;i++){
        if(rand() % 2 == 0){
            heads++;
            printf("Round %d: Heads\n", i+1);
        } else {
            tails++;
            printf("Round %d: Tails\n", i+1);
        }
    }
    printf("Heads: %d, Tails: %d\n", heads, tails);

    return 0;
}