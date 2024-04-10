#include<studio.h>
#include<conio.h>
int linear(int arr[], int n, int s)
{
{
    if (n==0)
    return-1;
    else if(arr[n-1] == 5)
    return n-1;
    else
    return linear(arr,n-1,s);
}
int main()
{
    int arr[20],i,s,n,result;
    printf("enter number of array element:")
    scanf("%d",&n);
    printf("enter element of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",& arr[i]);
    }
}
printf("enter element to search: ");
scanf("%d",&s);
result=linear(arr,n,s);
if(result==1)
printf("element is not found");
else
printf("element found at %d", result);
getch();
}