class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  
    {
        unordered_set<int> s;
        for(int i  = 0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i  = 0;i<m;i++)
        {
            s.insert(b[i]);
        }
        return s.size();
    }
};
