#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;

    for(int i = 0; i < T; i ++)
    {
        // 0 < N <= M < 30 이기 때문에 최대 29!을 담아야 하기 때문에
        // unsigned long long 으로 선언
        unsigned long long result = 1;
        cin >> N >> M;

        int B , S;

        // M-N 과 N 중에 더 큰 수를 B에, 작은 수를 S에 저장
        // B + S = M
        if (M - N >= N)
        {
            B = M - N;
            S = N;
        }
        else
        {
            B = N;
            S = M - N;
        }
        // M! / (B! * S!)
        // M! / B! 를 한번에 계산 B+1 ~ M 까지 곱해준다
        for(int j = B + 1; j <= M; j++)
            result *= j;
        // 1 / S! 를 계산
        for(int j = 1; j <= S; j++)
            result /= j;

        cout << result << endl;
    }
}