#include <stdio.h>

int FactorialFunc(int ResultNum){
	
	if(ResultNum > 1){
		return ResultNum * FactorialFunc(ResultNum - 1);
	}
	else{
		return 1;
	}

}

int main(void){

	int InputNum = 0, OutputNum = 1;

	printf("Enter the Input Number:");
	scanf("%d", &InputNum);

	OutputNum = FactorialFunc(InputNum);

	printf("Factorial of %d Is %d", InputNum, OutputNum);
	
	getchar();
	return 0;
}
