#include <cstdio>
#include <algorithm>
using namespace std;
float rate[3][3] = {0};

int main(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf("%f", &rate[i][j]);
		}
	}
	float profit = 1;
	for(int i = 0; i < 3; i++){
		float MAX, temp[3];
		for(int j = 0; j < 3; j++){
			temp[j] = rate[i][j];  //只能通过循环赋值
		}
		sort(temp,temp + 3);
		MAX = temp[2];  //max()只能找出两个数中最大值，不能找出数组中最大值
		if(rate[i][0] == MAX) printf("W ");
		if(rate[i][1] == MAX) printf("T ");
		if(rate[i][2] == MAX) printf("L ");
		profit *= MAX;
	}
	printf("%.2f", (profit*0.65-1)*2);
}
//满分，但是C++中max函数和整个数据赋值给另一个数组都很不方便
// 1.1 2.5 1.7
// 1.2 3.0 1.6
// 4.1 1.2 1.1
