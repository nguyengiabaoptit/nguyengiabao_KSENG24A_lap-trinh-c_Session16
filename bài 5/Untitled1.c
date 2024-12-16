#include<stdio.h>
#include<stdlib.h>
int main(int arc, const char * arg[]){
	int *numPtr;
	numPtr=(int *)malloc(sizeof(int));
	*numPtr=20;
	(*numPtr)++;
	printf("gia tri dang nam trong o nho duoc numPtr tro toi = %d\n", *numPtr);
	free(numPtr);
	int *arrPtr;
	arrPtr=(int *)malloc(6*sizeof(int));
	int i;
	for(i=0; i<6; i++){
		printf("arr[%d]=",i);
		scanf("%d", arrPtr+i);
	}
	int j;
	for(j=0; j<6;j++){
		printf("arr[%d]=%d\n", j, (arrPtr + j));
	}
	free(arrPtr);
	return 0;
}

