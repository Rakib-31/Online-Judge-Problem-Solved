#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,a[100],b[100],temp;
    stack <int> st,st1;

    while(scanf("%d%d",&n,&m) != EOF)
    {
        int sum = 0,count = 0,count1 = 0,total1 = 0,total,expense = 0;
        for(i = 0;i < m;i++){
            scanf("%d%d",&a[i],&b[i]);
            expense+=a[i];
        }
        if(expense>2000)
            n += 200;
        for(i = 0;i < m-1;i++)
        {
            for(j = i+1;j < m;j++)
            {
                if(a[j] > a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;

                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        for(j = 0;j<m;j++)
        {
            sum += a[j];
            if(sum <= n)
            {
                count += b[j];
                st.push(a[j]);
                st1.push(j);
            }
            else sum -= a[j];
        }
        if(sum > 2000) total1 = count;
        else total = count;

        while(st.size() != NULL)
        {
            int x = st1.top();
            count -= b[x];
            sum -= st.top();
            st.pop();
            st1.pop();
            if(x < m-1)
            {
                for(i = x + 1;i < m;i++)
                {
                    sum += a[i];
                    if(sum <= n)
                    {
                        count += b[i];
                        st.push(a[i]);
                        st1.push(i);
                    }
                    else sum -= a[i];
                }
                if(sum > 2000)
                {
                    if(count > total1) total1 = count;

                }
                else
                    if(count > total) total = count;
            }
        }
        if(total1) printf("%d\n",total1);
        else printf("%d\n",total);
    }

    return 0;
}
