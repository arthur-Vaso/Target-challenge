
#include <stdio.h>

int recursive(int number);
int main()
{
    int number, fibonacci;
    int index = 0;
    int isTrue = 0;

    printf("Inform a number to check if is a fibonacci number.");
    scanf("%i", &number);

    while (isTrue == 0){

        fibonacci = recursive(index);

        if(fibonacci == number) {
            printf("%i is a Fibonacci number.", number);
            isTrue = 1;
        } else if(fibonacci < number) {
            index++;
        } else {
            printf("%i isn`t a Fibonacci number.", number);
            isTrue = 1;
        }

    }

    return 0;
}

int recursive(int number){

    if (number < 2) {
        return number;
    } else {
        return recursive(number - 1) + recursive(number - 2);
    }

};
