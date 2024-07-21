#include<stdio.h>
#include<stdlib.h>

void insertion(int a[],int n){
    int i,j,tmp;
    for(i=1;i<n;i++)
    {
        tmp=a[i];
        for(j=i;j>0&&tmp<a[j-1];j--){
            a[j]=a[j-1];
        }
        a[j]=tmp;
    }
}

void shell(int a[1000],int n){
    int i,j,gap,tmp,c;
    for(gap=n/2;gap>=1;gap=gap/2){
        for(i=gap;i<=n-1;i++){
            tmp=a[i];
            for(j=i-gap;j>=0&&tmp<a[j];j=j-gap){
                a[j+gap]=a[j];
            }
            a[j+gap]=tmp;
        }
    }
}

void selection(int a[1000],int n){
    int i,j,mid,tmp;
    for(i=0;i<n;i++){
        mid=i;
        for(j=i+1;j<=n-1;j++){
            if(a[j]<a[mid])
                mid=j;
        }
        tmp=a[i];
        a[i]=a[mid];
        a[mid]=tmp;
    }
}

void quick(int a[],int low,int high){
    int pivot=a[low],i,j,tmp;
    if(low<high){
        pivot=a[low];
        i=low+1;
        j=high;
        while(i<=j){
            while(a[i]<pivot){
                i++;
            }

            while(a[j]>pivot){
                j--;
            }

            if(i<j){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
        a[low]=a[j];
        a[j]=pivot;
        quick(a,low,j-1);
        quick(a,j+1,high);
    }
}

void merge(int a[],int low,int mid,int high)
{
    int i,j,k,tmp[100]={0};
    i=low, j=mid+1, k=low;

    while(i<=mid&&j<=high){
        if(a[i]<a[j]){
            tmp[k++]=a[i++];
        }

        else{
            tmp[k++]=a[j++];
        }
    }

    while(j<=high){
        tmp[k++]=a[j++]; 
    }

    while(i<=mid){
        tmp[k++]=a[i++];
    }

    for(i=low;i<=high;i++)
        a[i]=tmp[i];
}

void partition(int a[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        partition(a,low,mid);
        partition(a,mid+1,high);
        merge(a,low,mid,high);
    }
}

void percdown(int a[], int n, int i);

void heapsort(int a[],int n){
    int i,tmp,child;
    for(i=n/2;i>=0;i--){
        percdown(a, i, n);
    }

    for(i=n-1;i>0;i--){
        tmp=a[0];a[0]=a[i];
        a[i]=tmp;
        percdown(a,0,i);
    }
}

void percdown(int a[],int i,int n){
    int child,tmp;
    for(tmp=a[i];2*i+1<n;i=child){
        child=2*i+1;
        if(child!=n-1&&a[child+1]>a[child])
            child++;
        if(tmp<a[child]){
            tmp=a[i];a[i]=a[child];
            a[child]=tmp;
        }
        break;
    }
    a[i]=tmp;
    percdown(a,0,i);
}

int main(){

    int n,a[1000],i,c,j,low=0,high=n-1;
    while(1)
    {
        printf("Enter Array Size: ");
        scanf("%d",&n);

        printf("Enter Array: ");
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

        int req;
        printf("\n enter 1 for INSERTION SORT\n enter 2 for SHELL SORT\n enter 3 for SELECTION SORT\n enter 4 for QUICK SORT\n enter 5 for MERGE SORT\n enter 6 for HEAP SORT\n PRESSANY KEY OTHER THAN 1,2,3,4,5,6 TO EXIT\n");
        scanf("%d",&req);

        switch(req)
        {
            case 1:insertion(a,n);
                for(i=0;i<n;i++){
                    printf("%d\t",a[i]);
                }
                break;

            case 2:
                shell(a,n);
                for(i=0;i<n;i++)
                    printf("%d\t",a[i]);
                break;

            case 3:
                selection(a,n);
                for(i=0;i<n;i++){
                    printf("%d\t",a[i]);
                }
                break;

            case 4:
                quick(a, low,high);
                low=0;
                high=n-1;
                for(i=0;i<n;i++)
                    printf("%d\t",a[i]);
                break;

            case 5:
                partition(a,low,high);
                for(i=0;i<n;i++)
                    printf("%d\t",a[i]);
                break;

            case 6: 
                heapsort(a,n);
                printf("sorted data\n");
                for(j=0;j<n;j++)
                    printf("%d\t",a[j]);
                break;

            default:
                exit(0);
        }
    }

    return 0;
}