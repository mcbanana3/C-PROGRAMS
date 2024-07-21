#include<stdio.h>

int calc(int na, int nb, int nc);

int main() {

    int t,na,nb,nc;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &na, &nb, &nc);
        calc(na,nb,nc);
    }
    

    return 0;

}

int calc(int na, int nb, int nc) {

    if (na > nb + nc || nb > na + nc || nc > na + nb)
    {
        printf("YES\n");
    }

    else {
        printf("NO\n");
    }

}