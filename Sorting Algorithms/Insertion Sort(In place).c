#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,j,min,t,n,k;//a[10]={67,87,12,23,45,3,52,78,89,91}
	printf("Enter the number of elements of the array: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter the element no. %d: ",i+1);
		scanf("%d",a+i);
	}
	for(i=1;i<n;i++){//Controlling the unsorted part
		//temp=a[i];
		for(j=0;j<i;j++){//Controlling the sorted part
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		/*for(k=0;k<n;k++){
			printf("%d\n",*(a+k));
		}
		printf("...........................................\n");*/
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(a+i));
	}
	return 0;
}
