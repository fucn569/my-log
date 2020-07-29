# include <iostream>
using namespace std;
int week = 1;
int cycle(int limit)
{
    int day;
    int i=-1;
    // cout << endl;
    for (day = 1; day < limit;day++,week++)
    {
        if(week==8)
        {
            week = 1;
        }
        if (day == 13)
        {
            i = week-1;
        }
        // cout << week;
    }
    return i;
}
int main(){
    int i,n,j,k;
    cin >> n;
    int year = 1900;
    int month;
    int count[7];
    for (i = 0; i < 7;i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        if ((year + i) % 4 == 0 && year + i != 1900 && year + i != 2100 && year + i != 2200)
        {
            for (month = 1; month < 13; month++)
            {
                if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                    k = cycle(31);
                    if(k!=-1)
                    {
                        count[k]++;
                    }
                }
                else if (month == 2)
                {
                    k = cycle(30);
                    if(k!=-1)
                    {
                        count[k]++;
                    }
                }
                else
                {
                    k = cycle(32);
                    if(k!=-1)
                    {
                        count[k]++;
                    }
                }
            }
        }
        else
        {
            for (month = 1; month < 13; month++)
            {
                if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                    k = cycle(31);
                    if(k!=-1)
                    {
                        count[k]++;
                    }
                }
                else if (month == 2)
                {
                    k = cycle(29);
                    if(k!=-1)
                    {
                        count[k]++;
                    }
                }
                else
                {
                    k = cycle(32);
                    if(k!=-1)
                    {
                        count[k]++;
                    }
                }
            }
        }
    }
    int count2[7];
    for (i = 0; i < 7;i++)
    {
        count2[i] = count[i];
    }
    for (i = 0; i < 5;i++)
    {
        j = i + 2;
        count[j] = count2[i];
    }
    count[0] = count2[5];
    count[1] = count2[6];
    for (i = 0; i < 7;i++)
    {
        cout << count[i] << ' ';
    }
    // system("pause");
    return 0;
}
