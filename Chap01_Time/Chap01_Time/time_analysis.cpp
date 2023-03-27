#include <cstdio>
#include <cstdlib>
#include <ctime>


int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + i;
	}
	return sum;
}

int sum_of_N2(int n)
{
	return (n * (n + 1)) / 2;
}

int main()
{
	clock_t start, finish;  // ���� �ð�, ������ �ð�
	double duration;		// �ɸ� �ð�

	start = clock();		// ���� �ð��� start�� ����
	// ����ð��� �����ϰ��� �ϴ� �ڵ� �Է�
	// sum_of_N �Լ� ȣ��
	//int sum = sum_of_N(100000000);

	// sum_of_N2 �Լ� ȣ��
	 int sum_of_N2(100000000);
	// ...
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f �� �ɷȽ��ϴ�.\n", duration);
	return 0;
}