#include<conio.h>
#include<stdio.h>
int Linear_search(int arr[], int Search_ele, int n)
{
    int i;
    static int temp=0;
    if(n>0)
    {
        i=n-1;
          if(arr[i]==Search_ele)
            temp=1;
        Linear_search(arr,Search_ele,i);
    }
return temp;
}
int main()
{
    int n,j;
    printf("Enter your array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array Element:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    int Search_ele;
    printf("Enter the search element:");
    scanf("%d",&Search_ele);
    if(Linear_search(arr,Search_ele,n)==1)
        printf("Element found....");
    else
        printf("Element not found....");
    return 0;
}