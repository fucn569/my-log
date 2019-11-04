#include <stdio.h>
int main()
{
	if(-1){
		printf("1");
	}
	if(0){
		printf("2");
	}
	if(1){
		printf("3");
	}
	if(!(-1)){
		printf("4");
	}
	if(!0){
		printf("5");
	}
	if(!1){
		printf("6");
	}
    system("pause");
	return 0;
}

//if后填非0常数是真
