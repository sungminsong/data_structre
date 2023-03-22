#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
	clock_t start, finish;  // 시작 시각, 끝나는 시각
	double duration;		// 걸린 시간

	start = clock();		// 현재 시각을 start에 저장
	// 실행시간을 측정하고자 하는 코드 입력
	int a = 10 + 20;
	// ...
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f 초 걸렸습니다.\n", duration);
	return 0;
}