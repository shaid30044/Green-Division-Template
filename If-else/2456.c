#include <stdio.h>

int main()
{
    int cards[5];
    int i;
    int increasing = 0, decreasing = 0;

    for (i = 0; i < 5; i++)
        scanf("%d", &cards[i]);

    for (i = 1; i < 4; i++)
    {
        cards[i] < cards[i + 1] && increasing++;
        cards[i] > cards[i + 1] && decreasing++;
    }

    printf("%c\n", increasing == 3   ? 'C'
                   : decreasing == 3 ? 'D'
                                     : 'N');

    return 0;
}