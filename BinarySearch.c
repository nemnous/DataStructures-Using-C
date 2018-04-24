//Binary search using C
#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[],int len,int target)
{
    int max=(len-1);
    int min=0;
    int middle; //index of middle elements
    int count; //count of number of steps

    while(max>=min)
    {
        middle = (max+min)/2;
        if(arr[middle]==target)
        {
            printf("%d steps are required for search.\n",count);
            return middle;
        }
        else if(arr[middle]>target)
        {
            //target is on left half of array
            max=(middle-1);
        }
        else
        {
            //target will be on right half of array
            min=(middle+1);
        }


    }
    return -1;
}

int main()
{
    int n,target;
    printf("enter size of array \n");
    scanf("%d",&n);
    int arr1[n];
    printf("enter the elements of array \n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    printf("Enter target number \n");
    scanf("%d",&target);
    int result=binarysearch(arr1,n,target);
    if(result==-1)
        printf("Element not found");
    else
        printf("Element located at position %d ",result+1);
    return 0;
}
