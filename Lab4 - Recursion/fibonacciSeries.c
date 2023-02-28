#include <stdio.h>
#include <stdlib.h>

void fib(int n){
	int i, nterm;
	int num1=0;
	int num2=1;
	nterm = num1+num2;
	printf("%d\t,%d\t", num1, num2);
	for (i=3; i<=n; ++i){
		printf("%d\t,", nterm);
		num1 = num2;
		num2 = nterm;
		nterm = num1+num2;
	}
}

int fibo(int n){
	return (fibo(n-1)+fibo(n-2));	
}

int main(){
	int n, i, m=0;
	printf("Enter the value of n: ");
	scanf("%d \n", &n );
	//fib(n);
	
	for(i=1; i<=n; i++){
		printf("%d\t,", fibo(m));		
	}
return 0;
}
