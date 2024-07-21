#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

struct triangle
{
    int a;
    int b;
    int c;
    int area;
    int p;
    int min;
};

void swap(struct triangle *tri,int i, int j);

void sort(struct triangle *tri, int n);

int main() {

    int n;

    struct triangle *tri;

    tri = (struct triangle *)malloc(sizeof(struct triangle)*n);

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &tri[i].a, &tri[i].b, &tri[i].c);
    }
    
    for (int i = 0; i < n; i++)
    {
        tri[i].p = tri[i].a + tri[i].b + tri[i].c/2;
        tri[i].area = sqrt(tri[i].p*(tri[i].p - tri[i].a) * (tri[i].p - tri[i].b) * (tri[i].p - tri[i].c));
    }

    sort(tri, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tri[i].a, tri[i].b, tri[i].c);
    }

    return 0;
}

void swap(struct triangle *tri, int i, int j) {

    struct triangle temp=tri[i];
    tri[i]=tri[j];
    tri[j]=temp;
}

void sort(struct triangle *tri, int n) {

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (tri[i].area > tri[j].area)
                swap(tri,i,j);            
        }
           
    }
    
}