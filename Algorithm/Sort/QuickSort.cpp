#include <iostream>

#define LENGTH 9 // �迭�� ����

using namespace std;

void quickSort(int* _data, int _start, int _end)
{
	// ���Ұ� 1�� �� ���
	if (_start >= _end) { return; }
	int pivot = _start;
	int left = _start + 1;
	int right = _end;
	int temp;

	while (left <= right)
	{
		// pivot ���� ū �� ã��
		while (_data[pivot] > _data[left] && left < _end)
		{
			left++;
		}

		// pivot ���� ���� �� ã��
		while (_data[pivot] < _data[right] && right > _start)
		{
			right--;
		}

		// �ڸ� ��ȯ
		if (left >= right)	// �������� �� �Ǵ� ������
		{
			temp = _data[pivot];
			_data[pivot] = _data[right];
			_data[right] = temp;
		}
		else	// �������� �ʾ�����
		{
			temp = _data[left];
			_data[left] = _data[right];
			_data[right] = temp;
		}
	}
	quickSort(_data, _start, right - 1);	// ���� ����
	quickSort(_data, right + 1, _end);	// ���� ����
}

int main()
{
	int dataArr[LENGTH] = { 2, 5, 7, 8, 4, 9, 3, 1, 6 };

	// �� ���� ����
	quickSort(dataArr, 0, LENGTH - 1);

	// ��� ���
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