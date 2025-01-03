class Solution {
public:
     
    int findTheWinner(int n, int k) {
        //O(n^2)
    //   vector<int> arr;
    //   for(int i=1;i<=n;i++) arr.push_back(i);
    //     int st=0;
    //   while(arr.size()>1){
    //     int rem= (st+k-1)% arr.size();
    //     arr.erase(arr.begin()+ rem);
    //     st=rem;
    //   }
    //   return arr[0];
    //m2- O(n)- tc & sc
        return winnerHelper(n, k) + 1; 
      
    }
    private:
    int winnerHelper(int n, int k) {
        if (n == 1) return 0;
        return (winnerHelper(n - 1, k) + k) % n;
    }
};