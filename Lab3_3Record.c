#include <stdio.h>
    int main () {
        for(int i=1; i<=10; i++){
            if(i==6){
                continue;
            }
            printf("%d\n",i);
        }
        printf("6 is skip number");
        return 0;
    }