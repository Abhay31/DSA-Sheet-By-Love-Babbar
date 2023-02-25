class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            sum += arr[i];
            maxi = max(maxi,sum);
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};
