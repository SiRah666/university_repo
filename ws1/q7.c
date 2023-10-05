#include <stdio.h>
#include <math.h>

int main() {
    int  i;
    long int num, temp, rev_num;  //rev_num will store reverse of num

    printf("[Reverse a 5 digit number]\n\n");
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    temp = num; //save original input for final output
    rev_num = 0;
    if(temp >= 10000 && temp <= 99999)
        for(i = 4; i >= 0; i--)
        {
            rev_num += floor((temp % 10)*pow(10, i));
            temp /= 10;
        }
    else
    {
        printf("Error: Invalid Input\n");
        return 1;
    }

    printf("The reverse of %d is %d\n", num, rev_num);
    return 0;
}
