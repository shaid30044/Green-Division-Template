#include <stdio.h>

int main()
{
    int sd, sh, sm, ss, ed, eh, em, es, d, h, m, s;

    scanf("Dia %d\n", &sd);
    scanf("%d : %d : %d\n", &sh, &sm, &ss);
    scanf("Dia %d\n", &ed);
    scanf("%d : %d : %d\n", &eh, &em, &es);

    d = ed - sd;
    h = eh - sh;
    m = em - sm;
    s = es - ss;

    if (s < 0)
    {
        s += 60;
        m--;
    }
    if (m < 0)
    {
        m += 60;
        h--;
    }
    if (h < 0)
    {
        h += 24;
        d--;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}