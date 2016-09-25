#include <cstdio>
int index[1001], coef[1001], ans[1001], temp[2002];

int main(){
	int p, count1 = 0,count2 = 0;
	// while(scanf("%d", &p) != EOF) temp[count1++] = p;  ctrl+Z 加回车手动触发EOF
	for(int i = 0; i < 2002; i++) {
		scanf("%d", &p);
		temp[count1++] = p;
	} 
	for(int i = 0; i < 2002;){
		coef[count2] = temp[i];
		index[count2] = temp[i+1];
		ans[count2] = coef[count2] * index[count2];
		index[count2]--;
		if(index[count2] >= 0){
			printf("%d %d", ans[count2], index[count2]);
			if(index[count2] != 0){
				printf(" ");
			}
		}
		count2++;
		i += 2;
	}
	return 0;
}

//起码得了12分，通过一个case