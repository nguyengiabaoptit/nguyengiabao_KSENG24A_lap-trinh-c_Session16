#include <stdio.h> 
void jung(int put1, int put2);
void jung2(int *put1,int *put2);
int main(int art, const char * arg[]){
     int num1=20;
     int num2=30;
     int temt; 
     printf("num1 before jung = %d\n", num1);
     printf("num2 before jung = %d\n", num2);
     jung2(&num1,&num2);
     printf("num1 after jung = %d\n", num1);
     printf("num2 after jung = %d\n", num2);
     return 0;
}
void jung(int put1, int put2){
	int temt = put1;
	put1 = put2;
	put2 = temt;
}
void jung2(int *put1,int *put2){
	int temt = *put1;
	*put1 = *put2;
	*put2 = temt; 
	return 0;
}

