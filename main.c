#include <stdio.h>
int solve(FILE* z){
    int tmp , counter,ctr, min; //
    counter = 1;
    fscanf(z,"%d",&min);
    for (; !feof(z); ++counter) {
        fscanf(z,"%d",&tmp);
        if(tmp < min){
            min = tmp;
            ctr = counter+1;
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
