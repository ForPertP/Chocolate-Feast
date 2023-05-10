#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'chocolateFeast' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER c
 *  3. INTEGER m
 */

int chocolateFeast(int n, int c, int m)
{
    int result = 0;
    int chocolate = n / c;
    int wrapper = 0;

    while (chocolate > 0)
    {
        result += chocolate;
        wrapper += chocolate;
        chocolate = wrapper / m;
        wrapper = wrapper % m;
    }
    
    return result;
}
