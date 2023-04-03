#include <cstdio>
//1차원 배열에서 최대값을 찾는 함수
int findMaxValue(int a[], int len)
{
	int maxVal = a[0];

	for (int i = 0; i < len; i++) {
		if (maxVal < a[i])
			maxVal = a[i];
	}

	return maxVal;
}

//2차원 영상(배열)에서 최대 밝기 값을 찾는 함수
//2차원 배열에서는 뒤에 크기를 설정해줘야댐 [][]x
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
	//printf("배열의 최대 값=%d\n", maxVal);
	int img[4][5] = { {3, 24, 32, 54, 67},
		{4, 23, 78, 87, 45},
		{12, 13, 14, 19, 96},
		{121, 145, 231, 817, 219} };
	
	int maxPixel = findMaxPixel(img, 4, 5);
	printf("영상의 최대 밝기 = %d\n", maxPixel);

	

	return 0;
}