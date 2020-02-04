#include <stdio.h>
int main(){
	int tab[20]={2,4,6,1,4,2,1,7,9,12,57,68,31,34,26,32,2,4,6,89};
	int* ptr=tab;
	int temp=0;
	for(int i=0;i<20;i++){
		printf("%d ",tab[i]);
	}
	putchar('\n');
	for(int i=0;i<20-1;i++){
		for(int j=0;j<20-i-1;j++){
			if(*(ptr+j)>*(ptr+j+1))
			{
			temp=*(ptr+j);
			*(ptr+j)=*(ptr+j+1);
			*(ptr+j+1)=temp;
			}
		}
	}
		for(int i=0;i<20;i++){
		printf("%d ",tab[i]);
	}
}
