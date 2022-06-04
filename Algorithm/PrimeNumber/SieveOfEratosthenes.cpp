#include <iostream>

using namespace std;

// 1부터 100000까지의 소수 구하기
int number = 100000;
int arr[100001];

void PrimeNumbers()
{
    // 2부터 시작해서 배수가 되는 숫자들을 모두 지운다.
    for (int i = 2; i <= number; i++)
    {
        // 이미 지워졌으면 건너뛰기
        if (arr[i] == 0) { continue; }

        // j = i의 배수를 찾아 지우기
        for (int j = i + i; j <= number; j += i)
        {
            arr[j] = 0;
        }
    }
}

int main()
{
    // arr[idx]에 idx값 대입
    for (int idx = 2; idx <= number; idx++)
    {
        arr[idx] = idx;
    }

    // 에라토스네테스의 체 실행
    PrimeNumbers();

    // 결과 출력
    for (int idx = 2; idx <= number; idx++)
    {
        if (arr[idx] != 0)
        {
            cout << arr[idx] << ' ';
        }
    }

    return 0;
}
```
