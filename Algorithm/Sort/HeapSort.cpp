#include <iostream>

#define LENGTH 7

using namespace std;

// 최대 힙 구성
void maxHeap(int _dataArr[], int _length)
{
    for (int idx = 1; idx < _length; idx++)
    {
        int child = idx;
        while (child != 0)
        {
            int root = (child - 1) / 2; // 자식으로 부터 root 알아내는 공식
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
        // 가장 큰 숫자를 맨 마지막 원소와 자리 바꾸기
        int temp = dataArr[idx];
        dataArr[idx] = dataArr[0];
        dataArr[0] = temp;
        maxHeap(dataArr, idx);
    }

    // 결과 출력
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