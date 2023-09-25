#include <stdio.h>

int main() {
	int x = 666; // declare value to an integer
	printf("X has the value of: %d\n", x);
	int* ptr = &x; // declare a pointer and set the address value from x
	printf("pointer holds value of: %d\n", *ptr);
	*ptr = 66; // change the value of content in ptr
	printf("pointer holds value: %d\n", *ptr);
}