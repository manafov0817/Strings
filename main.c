#include <stdio.h>
#include <stdlib.h>

int main() {


    char x[] = {'A','B','c','r','T','y','G','\0'};

    // Finds string's length
    int stringLength = 0;
    for( ; x[stringLength]!='\0'; stringLength++) {}
    printf("String's Length is %d \n",stringLength);

    // Changes case
    for( int i = 0; i < stringLength ; i++) {

        if(x[i]>=65 && x[i]<=90)
            x[i] += 32;

        else if(x[i]>='a' && x[i]<=122)
            x[i] -= 32;

        printf("Changed Case Char: %c \n", x[i]);

    }

    return 0;
}
