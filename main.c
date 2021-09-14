#include <stdio.h>
#include "limits.h"
int solve(FILE* z){
    int tmp , counter,ctr, min; //
    counter = 1;
    min = INT_MAX;
    for (; feof(z) != 1 ; ++counter) {
        fscanf(z,"%d",&tmp);
        if(tmp < min){
            min = tmp;
            ctr = counter;
        }
    }
    return ctr;
}
int main() {
    FILE* f = NULL;
    f = fopen("input.txt", "r");
    if(f==NULL)
        printf("oshibka");
    printf("%d",solve(f));
    return 0;
}
