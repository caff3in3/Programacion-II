#include <stdio.h>
#include <conio.h>

void converToBinary();

int main(){

    int dec;

    printf("Enter a decimal number to convert in binary: ");
    scanf("%i", &dec);

    converToBinary(dec);

    getch();

    return (0);
}

void converToBinary(int numDecimal){

    int remainder[30], i, c = 0;

    do{
        remainder[c] = numDecimal%2;
        numDecimal/=2;
        c++;
    } while (numDecimal != 0);

    printf("\nTheir binary conversion is:\n");

    for(i = c; i > 0; i--){
        printf("%i ", remainder[i-1]);
    }
   printf("\n");
}
