#include <stdio.h>

void main()
{
   int a[5], i,k,temp,choice;
   printf("\nEnter elements : ");
   
   for (i = 0; i < 5; i++)
   {
      scanf("%d", &a[i]);
   }
 for(i=0; i<5; i++)
 	 {
 	for (k=i; k<5; k++)
 	if (a[k]>a[k])
         {
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
         }
	 }

printf("\nAcending Order : ");
for(i=0; i<5; i++)

{
  printf("%d ",a[i]);
}
    for(i=0; i<5; i++)
	{
		for(k=i+1; k<5; k++)
		{
			if(a[i]<a[k])
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;	
			}
		}
	}
printf("\nDescending Order : ");
for(i=0; i<5; i++)
{
	printf("%d ",a[i]);
}

}

