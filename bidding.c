#include <stdio.h>

int main(void) {
	
    int t;
    int a[1000];
    int b[1000];
    int c[1000];

    printf("");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        printf("");
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if (a > b && a > c) {
            printf(" Alice ");
        } 
        
        else if (b > a && b > c) {
            printf(" Bob ");
        } 
  
        else if (c > a && c > b) {
            printf(" Charlie ");
        } 
  
        else if (a == b && a > c) {
        printf(" Alice ");
        }

        else if (a == b && b > c) {
        printf(" Bob ");
        } 
        
        else if (a == b && c > a) {
        printf(" Charlie ");
        } 
        
        else if (a == c && a > b) {
        printf(" Alice ");
        } 
        
        else if (a == c && b > a) {
        printf(" Bob ");
        } 
        
        else if (a == c && c > b) {
        printf(" Charlie ");
        } 
        
        else if (b == c && b > a) {
        printf(" Bob ");
        } 
        
        else if (b == c && a > b) {
        printf(" Alice ");
        } 
        
        else if (b == c && c > a) {
        printf(" Charlie ");
        } 
        
        else {
        printf(" Tie ");
  }
        
    }
    
	return 0;
}