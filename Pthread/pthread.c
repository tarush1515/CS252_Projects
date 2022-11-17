#include <stdio.h> 
#include <stdlib.h>
#include <pthread.h>

/*  Global Variables    */
float array[100];
int count;
int i;
int threads[3];

float average;
float minimum;
float maximum;

void input()
{
    printf("Enter the number of elements: ");
    scanf("%d",&count);
    printf("Enter elements: \n");
    for(i=0;i<count;i++)
    {
        scanf("%f",& array[i]);
    }
}

/* Thread-1 */
void *t_avg()
{
    float sum=0;
    for(i=0;i<count;i++)
    {
        sum  = sum + array[i];
    }
    average = sum/count ;
    printf("Average is %f",average);
    printf("\n");
}

/*  Thread-2    */
void *t_min()
{
    float temp;
    temp = array[0];
    for(i=0;i<count;i++)
    {
        if(array[i]<temp)
        {
            temp = array[i];
        }
    }
    minimum = temp;
    printf("Minimum is %f",minimum);
    printf("\n");
}

/*  Thread-3    */
void *t_max()
{
    float temp;
    temp = array[0];
    for(i=0;i<count;i++)
    {
        if(array[i]>temp)
        {
            temp = array[i];
        }
    }
    maximum = temp;
    printf("Maximum is %f",maximum);
    printf("\n");
    
}

int main(void)
{
    input();
    
    pthread_t t1;
    pthread_t t2;
    pthread_t t3;
    
    threads[0]=pthread_create(&t1,NULL,&t_avg,NULL);

    threads[1]=pthread_create(&t2,NULL,&t_min,NULL);

    threads[2]=pthread_create(&t3,NULL,&t_max,NULL);

    pthread_join(t1,NULL);

    pthread_join(t2,NULL);

    pthread_join(t3,NULL);
}
