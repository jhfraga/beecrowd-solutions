// 1052 - Mes - beecrowd

#include <stdio.h>

int main(void)
{
    char months[12][10] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int month;
    scanf("%d", &month);

    printf("%s\n", months[month - 1]);

    return 0;
}
