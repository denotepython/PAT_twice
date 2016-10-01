#include <cstdio>
char map[13] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};  
//映射关系的重要性

void change(int num){
	int a, b;
	a = num / 13;
	b = num % 13;
	if(a == 0) printf("0%c", map[b]);
	else{
		printf("%c%c", map[a], map[b]);
	}
}


int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("#");
	change(a);
	change(b);
	change(c);
	return 0;
}














