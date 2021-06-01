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
