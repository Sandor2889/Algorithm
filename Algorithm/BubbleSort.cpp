#include <iostream>

using namespace std;


int main()
{
    int dataArr[] = { 2, 5, 7, 8, 4, 9, 3, 1, 6 };

    // Bubble sort 실행
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8 - i; j++)
        {
            if (dataArr[j] > dataArr[j + 1])
            {
                int temp = dataArr[j];
                dataArr[j] = dataArr[j + 1];
                dataArr[j + 1] = temp;
            }
        }
    }

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
    return 0;
}