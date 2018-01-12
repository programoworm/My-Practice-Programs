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
	for(i=0;i<n-1;i++){//This loop is for the repeatation of the pass
		for(j=0;j<n-i-1;j++){//This loop is for the checking
			if(*(a+j)>*(a+j+1)){
				t=*(a+j+1);
				*(a+j+1)=*(a+j);
				*(a+j)=t;
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
