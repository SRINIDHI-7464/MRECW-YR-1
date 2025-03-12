#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[1000];
    int count[10] = {0};

    scanf("%s", str);


    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {  
            count[str[i] - '0']++;  
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");

    return 0;
}