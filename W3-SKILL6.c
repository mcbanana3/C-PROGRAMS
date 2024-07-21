#include<stdio.h>
#include<string.h>

int main() {

    int Student_ID;
    char Name[20];
    int m1, m2, m3;

    scanf("%d", &Student_ID);
    scanf("%s", &Name);
    scanf("%d%d%d", &m1, &m2, &m3);

    int sum = m1 + m2 + m3;
    float avg = (sum/3);

    printf("ID:%d NAME:%s TOTAL_MARK:%d AVG:%.2f\n", Student_ID, Name, sum, avg);

    return 0;

}