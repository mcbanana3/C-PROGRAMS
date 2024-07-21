#include<stdio.h>
#include<stdlib.h> 

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray* a, int tsize, int usize) {
//     (*a).total_size = tsize;
//     (*a).used_size = usize;
//     int * ptr = (int *)malloc(tsize*sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize*sizeof(int));
}

void show(struct myArray *a) {
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d \n", a->ptr[i]);
    }
    
}

void setval(struct myArray *a) {
    int n=0;
    
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter Elements : %d", i);
        scanf("%d", &n);
        a->ptr[i] = n;
    }
    
}

int main() {
    
    int n;
    struct myarray marks;
    createArray(&marks, 10, 2);
    show(&marks);
    setval(&marks);

    return 0;
}