class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int z = 0, o = 0, t = 0; // z for zero, o for one, t for two
        for(int i = 0;i<n;i++)
        {
            if(a[i] == 0)
                z++;
            else if(a[i] == 1)
                o++;
            else
                t++;
        }
        for(int i = 0;i<n;i++)
        {
            if(z > 0)
            {
                a[i] = 0;
                z--;
            }
            else if(o > 0)
            {
                a[i] = 1;
                o--;
            }
            else 
            {
                a[i] = 2;
                t--;
            }
        }
    }
};
