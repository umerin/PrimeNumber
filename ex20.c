#include<stdio.h>

int main(void)
{
	int a = 1;
	int b, c, d, e;

	do{
		a++;
		c = 1;

		d = 0;
		e = 0;

		b = a;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);

		while(!(b == c)){
			if (!(b % c++)){
				e++;
			}
		}

//		printf("e = %d\n", e);

		if (e + 1 == 2){
			printf("%d ", a);
		}

	}while(!(a == 100));

	return 0;
}
