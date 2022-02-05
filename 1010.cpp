#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;

    for(int i = 0; i < T; i ++)
    {
        // 0 < N <= M < 30 �̱� ������ �ִ� 29!�� ��ƾ� �ϱ� ������
        // unsigned long long ���� ����
        unsigned long long result = 1;
        cin >> N >> M;

        int B , S;

        // M-N �� N �߿� �� ū ���� B��, ���� ���� S�� ����
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
        // M! / B! �� �ѹ��� ��� B+1 ~ M ���� �����ش�
        for(int j = B + 1; j <= M; j++)
            result *= j;
        // 1 / S! �� ���
        for(int j = 1; j <= S; j++)
            result /= j;

        cout << result << endl;
    }
}