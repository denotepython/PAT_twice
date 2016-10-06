#include <cstdio>

int main(){
	int num, temp[3],count = 0;
	scanf("%d", &num);
	int record = num;
	while (num!= 0){
		temp[count++] = num % 10;
		num /= 10;
	}
	if(count == 3){
		for (int i = 0; i < temp[2]; ++i) printf("B");
		for (int i = 0; i < temp[1]; ++i) printf("S");
		for (int i = 1; i <= temp[0]; ++i) printf("%d", i);
	}
	else if (count == 2){
		for (int i = 0; i < temp[1]; ++i) printf("S");
		for (int i = 1; i <= temp[0]; ++i) printf("%d", i);
	}
	else if(count == 1){
		for (int i = 1; i <= temp[0]; ++i) printf("%d", i);
	}
	else printf("0");
}
