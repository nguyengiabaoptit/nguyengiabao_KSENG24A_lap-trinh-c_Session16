#include<stdlib.h>
int main(int arc, const char * arg[]){
	int put=-1;
	int index=0;
	int size =2;
	int *arrPtr;
	arrPtr=(int *)malloc(2*sizeof(int));
	do{
		printf("moi ban nhap gia tri vao mang arr[%d]=", index);
		scanf("%d", &put);
		if(index==size){
			size=size*2;
			arrPtr=(int *)realloc(arrPtr,size);
		}
		*(arrPtr+index)=put;
		index++;
	}while(put!=-1);
	int j;
	for(j=0; j<index-1; j++){
		printf("arr[%d]=%d\n",j, *(arrPtr+j));
	}
	free(arrPtr);
	return 0;
}
