#include <iostream>

#define LENGTH 9 // 배열의 길이

using namespace std;

int main()
{
    int dataArr[LENGTH] = { 2, 5, 7, 8, 4, 9, 3, 1, 6 };
    
    int evenCount = 0;  // 짝수 실행 수
    int oddCount = 0;   // 홀수 실행 수
    int temp;
    bool flag = true;   // 정렬 중단 스위치

    // Cocktail sort 실행
    for (int idx = 0; idx < LENGTH; idx++)
    {
        flag = true;
        if (idx % 2 == 0) // 짝수 일때
        {
            for (int even = 0 + oddCount; even < LENGTH - 1 - evenCount; even++)
            {
                // 왼쪽에 있는 수가 오른쪽 보다 크면 자리 바꾸기 (큰 수를 오른쪽으로)
                if (dataArr[even] > dataArr[even + 1])
                {
                    temp = dataArr[even];
                    dataArr[even] = dataArr[even + 1];
                    dataArr[even + 1] = temp;
                    flag = false;
                }
            }
            evenCount++;
        }
        else // 홀수 일때
        {
            for (int odd = LENGTH - 1 - evenCount; odd > 0 + oddCount; odd--)
            {
                // 오른쪽에있는 수가 왼쪽 수보다 작으면 자리 바꾸기 (작은 수를 왼쪽으로)
                if (dataArr[odd] < dataArr[odd - 1])
                {
                    int temp = dataArr[odd - 1];
                    dataArr[odd - 1] = dataArr[odd];
                    dataArr[odd] = temp;
                    flag = false;
                }
            }
            oddCount++;
        }

        if (flag) { break; }
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
    cout << "\n\n\n\n\n\n\n";
    return 0;
}