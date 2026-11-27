#include <stdio.h>

void checkevenodd() {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    int evenodd = input % 2;

    if (evenodd == 0) {
        printf("YOUR NUMBER IS EVEN.....");
    }
    else {
        printf("YOUR NUMBER IS ODD.....");
    }
}

int main() {
    checkevenodd();
    return 0;
}