#include <stdio.h>

int main(int art, const char * artg[]){
	int x=6;
	int *xPtr=&x;
	printf("dia chi cua bien x = %lu\n", (unsigned long)&x);
	printf("dia chi cua bien x dang duoc luu tru trong xPtr la:=%lu\n", (unsigned long)xPtr);
	printf("gia tri ma bien xPtr dang tham chieu toi la:=%d\n",*xPtr);
	*xPtr=*xPtr * 20;
	printf("gia tri dang o trong bien x=%d\n", x);
	return 0; 
}
