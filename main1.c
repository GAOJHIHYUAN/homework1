#include <stdio.h>
#define SIZE 10
int main(void)
{
	int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
	int PassPass;
	size_t i;
	int hold;
	puts("Data items in original order");
	for(i=0;i<SIZE;++i){
		printf("%4d",a[i]);
	}
	for(PassPass=1;PassPass<SIZE;++PassPass){
		for(i=0;i<SIZE-1;++i){
			if(a[i]>a[i+1]){
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
		}
	}
	puts("\nData items in ascending order");
	for(i=0;i<SIZE;++i){
		printf("%4d",a[i]);
	}
	puts("");
}
