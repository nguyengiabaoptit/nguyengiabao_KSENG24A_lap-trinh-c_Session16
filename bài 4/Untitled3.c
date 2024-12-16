#include <stdio.h> 

int main(int art, const char * arg[]){
	int arr[5]={2,4,6,8,10};
	int *arrPtr=arr;
	printf("dia chi cua mang arr = %lu\n", (unsigned long)&arr);
	printf("phan tu thu 0 trong mang =%d\n", *arrPtr);
	printf("phan tu thu 1 trong mang =%d\n", *(arrPtr+1));
	printf("phan tu thu 2 trong mang =%d\n", *(arrPtr+2));
	printf("phan tu thu 3 trong mang =%d\n", *(arrPtr+3));
	printf("phan tu thu 4 trong mang =%d\n", *(arrPtr+4));
	int array[5];
	int *arrayPtr = arr;
	int i;
	for(i=0; i<5; i++){
		printf("moi ban nhap phan tu vao trong mang arr[%d]:", i);
		scanf("%d", arrPtr + i);
	}
	int j;
	for(j=0;j<5;j++){
		printf("arr[%d]=%d\n", j,*(arrPtr+j));
	}
	return 0;
}
