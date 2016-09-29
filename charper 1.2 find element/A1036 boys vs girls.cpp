#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 10001;
 struct stu
 {
 	char name[11];
 	char gender;
 	char num[11];
 	int score;
 }M[maxn], F[maxn];

 bool cmp(stu a, stu b){
 	return a.score < b.score;
 }

 int main(){
 	int n;
 	scanf("%d", &n);
 	int count1 = 0, count2 = 0;
 	for (int i = 0; i < n; ++i)
 	{
 		char name[11],gender,num[11];
 		int score;
 		scanf("%s %c %s %d", &name, &gender, &num, &score);
 		if(gender == 'M'){
 			strcpy(M[count1].name, name);
 			M[count1].gender = gender;
 			strcpy(M[count1].num, num);
 			M[count1].score = score;
 			count1++;
 		}
 		if(gender == 'F'){
 			strcpy(F[count2].name, name);
 			F[count2].gender = gender;
 			strcpy(F[count2].num, num);
 			F[count2].score = score;
 			count2++;
 		}
 	}
 	if(count2 == 0 && count1 == 0){
 		printf("Absent\nAbsent\nNA");
 	}
 	else if(count2 == 0 && count1 != 0){
 		printf("Absent\n");
 		sort(M, M + count1, cmp);
 		printf("%s %s\n", M[0].name, M[0].num);
 		printf("NA");
 	}
 	else if(count1 == 0 && count2 != 0){
 		sort(F, F + count2, cmp);
 		printf("%s %s\n", F[count2-1].name, F[count2-1].num);
 		printf("Absent\n");
 		printf("NA");
 	}
 	else{
 		sort(F, F + count2, cmp);
 		printf("%s %s\n", F[count2-1].name, F[count2-1].num);
 		sort(M, M + count1, cmp);
 		printf("%s %s\n", M[0].name, M[0].num);
 		printf("%d", F[count2-1].score - M[0].score);
 	}
 }

//满分，排错遇到的两个问题，一是下标超标，应该是count2-1，而不是count2
//二是输入格式，对于有%s%c的混合输入，要严格按照格式来输入
//三是if else 语句，不要省略只写if，而不是else if，这样可能有重复输出！

// 3
// Joe M SJF09 89
// Mqeqr M SFE07 100
// Mary F S89F8 95

// 1
// Jean M as2339 60