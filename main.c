#include <stdio.h>
#include <stdlib.h>
// D:\Programming\Mastering Data Structures & Algorithms using C and C++\Strings
int main() {

    char x[] = "Mahammad";
    char x2[] = "Mahammad";

    // Finds string's length
    int sL = 0;
    for( ; x[sL]!='\0'; sL++) {}
    printf("String's Length is %d \n",sL);

//
//    // Changes case
//    for( int i = 0; i < sL ; i++) {
//
//        if(x[i]>=65 && x[i]<=90)
//            x[i] += 32;
//
//        else if(x[i]>='a' && x[i]<=122)
//            x[i] -= 32;
//
//        printf("Changed Case Char: %c \n", x[i]);
//
//    }

//    // Reverse String
//
//    char rev[sL];
//
//    for(int i = 0; i < sL; i++){
//        rev[i] = x[sL-i-1];
//    }

//    for(int i = 0; i < sL; i++){
//        char first = x[i];
//        rev[i] = x[sL-i-1];
//        rev[sL-i-1] = first;
//    }

//    for(int i=0; i < sL; i++){
//        if(x[i] < x2[i]){
//            printf("lower \n");
//        }
//        else if(x[i] > x2[i]){
//            printf("greater \n");
//        }
//        else{
//            printf("equals \n");
//        }
//    }

//    int isEqual = 1;
//    for(int i = 0; i < sL; i++){
//        if(x[i]!=x2[i]){
//            isEqual = 0;
//            break;
//        }
//    }

    printf("%d \n", isEqual);

    return 0;
}



































































