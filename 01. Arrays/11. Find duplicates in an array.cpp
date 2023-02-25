class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        int first_occurance;
        int last_occurance;
        vector<int> v1;
        int cnt = 0;
        sort(arr,arr+n); 
        for(int i =0; i < n; i = last_occurance+= 1)
        {
            first_occurance = last_occurance = i;
            while(last_occurance < n-1)
            {
                if(arr[i] == arr[last_occurance+1])
                  last_occurance += 1;
                else
                  break;
            }
            if(first_occurance != last_occurance)
            {
                v1.push_back(arr[i]);
                cnt++;
            }
        }
        if(cnt != 0)
          return v1;
        v1.push_back(-1);
        return v1;
    }
};
