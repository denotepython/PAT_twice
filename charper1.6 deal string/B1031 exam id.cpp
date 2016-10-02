#include <cstdio>
#include <cstring>
char map[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
int w[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
bool exam(char s[]){
	int sum = 0;
	for(int i = 0; i < 17; i++){
		if(s[i] - '0' >= 0 && s[i] - '0' <= 9){
			sum += (s[i] - '0') * w[i];
		}
		else return false;
	}
	if(s[17] == map[sum%11]) return true; //小心下标，是17不是18
	else return false;
}

int main(){
	char id[101][18];
	int n,count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%s", &id[i]);
		if(exam(id[i]) == false) {
			count++;
			printf("%s\n", id[i]);
		}
	}
	if(count == 0) printf("All passed");
}

// 4
// 320124198808240056
// 12010X198901011234
// 110108196711301866
// 37070419881216001X