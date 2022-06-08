#include <iostream>

#define LENGTH 9 // 배열의 길이

using namespace std;

void quickSort(int* _data, int _start, int _end)
{
	// 원소가 1개 인 경우
	if (_start >= _end) { return; }

	int pivot = _start;
	int left = _start + 1;
	int right = _end;
	int temp;

	while (left <= right)
	{
		// pivot 보다 큰 수 찾기
		while (_data[pivot] > _data[left] && left < _end)
		{
			left++;
		}

		// pivot 보다 작은 수 찾기
		while (_data[pivot] < _data[right] && right > _start)
		{
			right--;
		}

		// 자리 교환
		if (left >= right)	// 엇갈렸을 때 또는 같을때
		{
			temp = _data[pivot];
			_data[pivot] = _data[right];
			_data[right] = temp;
		}
		else	// 엇갈리지 않았을때
		{
			temp = _data[left];
			_data[left] = _data[right];
			_data[right] = temp;
		}
	}
	quickSort(_data, _start, right - 1);	// 좌측 정렬
	quickSort(_data, right + 1, _end);	// 우측 정렬
}

int main()
{
	int dataArr[LENGTH] = { 2, 5, 7, 8, 4, 9, 3, 1, 6 };

	// 퀵 정렬 실행
	quickSort(dataArr, 0, LENGTH - 1);

	// 결과 출력
	string result;
	for (int idx = 0; idx < 9; idx++)
	{
		if (idx == 8)
		{
			result += dataArr[idx] + '0';
		}
		else
		{
			result += dataArr[idx] + '0';
			result += ", ";
		}
	}
	cout << "data = {" << result << " }";
	cout << "\n\n\n\n\n\n\n";
	return 0;
}