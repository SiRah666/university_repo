#include <stdio.h>

int main() {
    int  i, acc;    //acc is the accumulator
    long int num;

    printf("[Calculate sum of 5 digit number]\n\n");
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    acc = 0;
    if(num >= 10000 && num <= 99999)
        for(i = 0; i < 5; i++)
        {
            acc += num%10;
            num /= 10;
        }
    else
    {
        printf("Error: Invalid Input\n");
        return 1;
    }
    printf("The ans is %d\n", acc);
    return 0;
}
