#include<stdio.h>
#include<malloc.h>
int main()
{
	int i,a[5]={1,2,3,4,5},*b,n,*index;	
	/*for(i=0;i<5;i++){
		b=&a[i];
		printf("%d\t%ld\n",a[i],b);
	}
	b=&a[0];
	for(i=0;i<5;i++){
	//	b=&a[i];
		printf("%ld\t%d\n",b+i,*(b+i));
	}*/
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	index=(int*)malloc(n*sizeof(int));
	b=index;
	for(i=0;i<n;i++){
		printf("Enter the element: ");
		scanf("%d",b++);
	}
	b=index;
	for(i=0;i<n;i++){
		printf("%d\n",*(b+i));
	}
	return 0;
}
