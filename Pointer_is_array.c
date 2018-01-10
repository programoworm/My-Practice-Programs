#include<stdio.h>
int main()
{
	int i,a[5]={1,2,3,4,5},*b;
	for(i=0;i<5;i++){
		b=&a[i];
		printf("%d\t%ld\n",a[i],b);
	}
	b=&a[0];
	for(i=0;i<5;i++){
	//	b=&a[i];
		printf("%ld\t%d\n",b+i,*(b+i));
	}
	return 0;
}
