#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
	clock_t start, finish;  // ���� �ð�, ������ �ð�
	double duration;		// �ɸ� �ð�

	start = clock();		// ���� �ð��� start�� ����
	// ����ð��� �����ϰ��� �ϴ� �ڵ� �Է�
	int a = 10 + 20;
	// ...
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f �� �ɷȽ��ϴ�.\n", duration);
	return 0;
}