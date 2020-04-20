#include<stdio.h>
#include<stdlib.h>

struct frame{
        int fslno;
        char finfo[20];
};

struct frame arr[10];
int n;

void sort()
{
        int i,j,ex;
        struct frame temp;
        for(i=0;i<n-1;i++)
        {
                ex = 0;
                for(j=0;j<n-i-1;j++)
                        if(arr[j].fslno > arr[j+1].fslno)
                        {
                                temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                                ex++;
                        }
                if(ex==0) break;
        }
}

int main()
{
        int i;
        printf("Enter the number of frames: ");
        scanf("%d",&n);
        printf("Enter the frame sequence number and frame contents: \n\n");

        for(i=0; i<n; i++)
                {
        scanf("%d%s",&arr[i].fslno,&arr[i].finfo);
        }
        sort();
        printf("\n\nThe frames in sequence: \n\n");
        for(i=0;i<n;i++)
        {
                printf("%d  %s\n",arr[i].fslno,arr[i].finfo);
        }
}
