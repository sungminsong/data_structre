#include <cstdio>
//1���� �迭���� �ִ밪�� ã�� �Լ�
int findMaxValue(int a[], int len)
{
	int maxVal = a[0];

	for (int i = 0; i < len; i++) {
		if (maxVal < a[i])
			maxVal = a[i];
	}

	return maxVal;
}

//2���� ����(�迭)���� �ִ� ��� ���� ã�� �Լ�
//2���� �迭������ �ڿ� ũ�⸦ ��������ߴ� [][]x
int findMaxPixel(int a[][5], int h, int w)
{
	int maxVal = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (maxVal < a[i][j])
				maxVal = a[i][j];
		}

	}
	return maxVal;
}
int main()
{
	//int arr[] = {3, 32, 82, 12, 34, 91, 10, 11, 10, 56};
	//int maxVal = findMaxValue(arr, 10);
	//printf("�迭�� �ִ� ��=%d\n", maxVal);
	int img[4][5] = { {3, 24, 32, 54, 67},
		{4, 23, 78, 87, 45},
		{12, 13, 14, 19, 96},
		{121, 145, 231, 817, 219} };
	
	int maxPixel = findMaxPixel(img, 4, 5);
	printf("������ �ִ� ��� = %d\n", maxPixel);

	

	return 0;
}