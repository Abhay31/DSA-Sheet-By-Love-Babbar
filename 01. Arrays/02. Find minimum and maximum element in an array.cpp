class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        int min = a[0], max = a[0];
        for(int i = 1;i<n;i++){
            if(min > a[i]){
                min = a[i];
            }
            if(max < a[i]){
                max = a[i];
            }
        }
        return {min,max};
    }
};
