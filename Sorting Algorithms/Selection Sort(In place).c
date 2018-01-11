#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,j,min,t,n;//a[10]={67,87,12,23,45,3,52,78,89,91}
	printf("Enter the number of elements of the array: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter the element no. %d: ",i+1);
		scanf("%d",a+i);
	}
	for(i=0;i<(n-1);i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(*(a+j)<*(a+min)){
				min=j;
			}
		}
		t=*(a+min);
		*(a+min)=*(a+i);
		*(a+i)=t;
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(a+i));
	}
	return 0;
}
