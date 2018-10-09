#include <cstdio>

int main()
{
    char s[1000005];

    int n, low, high, temp, caseNo = 1;
    bool flag;

    while (scanf("%s %d", s, &n) == 2)
    {
        printf("Case %d:\n", caseNo);
        caseNo++;

        while (n--)
        {
            scanf("%d%d", &low, &high);
            if (high < low)
            {
                temp = low;
                low = high;
                high = temp;
            }

            flag = true;

            for (int i = low; i < high; ++i)
                if (s[i] != s[i + 1])
                    flag = false;

            if (flag)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
