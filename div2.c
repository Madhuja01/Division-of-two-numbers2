#include<stdio.h>
int main() {
	int x, y;
	printf("Enter two numbers: ");
	scanf("%d%d", &x, &y);
	if(y==0) {
		printf("Division not possible");
	}
	else {
		printf("%d", x/y);
	}
	return 0;
}
