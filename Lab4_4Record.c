#include <stdio.h>
  int main() {
    int n; 
    printf("Enter your number:");
    scanf("%d",&n);
    while(n!=0) {
        int last = n % 10;
    
        printf("%d\n",last);
        n = n / 10
    }

    return 0;
  }