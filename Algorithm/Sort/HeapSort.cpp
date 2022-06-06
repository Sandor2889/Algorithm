#include <iostream>

#define LENGTH 7

using namespace std;

// �ִ� �� ����
void maxHeap(int _dataArr[], int _length)
{
    for (int idx = 1; idx < _length; idx++)
    {
        int child = idx;
        while (child != 0)
        {
            int root = (child - 1) / 2; // �ڽ����� ���� root �˾Ƴ��� ����
            if (_dataArr[root] < _dataArr[child])
            {
                int temp = _dataArr[root];
                _dataArr[root] = _dataArr[child];
                _dataArr[child] = temp;
            }

            child = root;
        }
    }
}

int main()
{
    int dataArr[] = { 6, 5, 3, 2, 1, 0, 7 };
    maxHeap(dataArr, LENGTH);

    for (int idx = LENGTH - 1; idx >= 0; idx--)
    {
        // ���� ū ���ڸ� �� ������ ���ҿ� �ڸ� �ٲٱ�
        int temp = dataArr[idx];
        dataArr[idx] = dataArr[0];
        dataArr[0] = temp;
        maxHeap(dataArr, idx);
    }

    // ��� ���
    string result;
    for (int idx = 0; idx < LENGTH; idx++)
    {
        if (idx == LENGTH - 1)
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