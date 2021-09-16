#include <stdio.h>
int solve(FILE* z){
    int tmp , counter,ctr, min; //
    int p;
    counter = 1;
    ctr = counter;
    if( fscanf(z,"%d",&tmp) != 1)
        return 109;// если файл пустой

     for (; !feof(z) && (p = fscanf(z,"%d",&tmp)) == 1 ; ++counter) {
        if(tmp < min){
            min = tmp;
            ctr = counter+1;
        }
    }
     if(p != 1)
         return 109;
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

