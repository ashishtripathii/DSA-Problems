#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {3, 3, 6, 1};
    int n=arr.size();

      // 1.First Approch
        int largest = arr[0];
          for(int i=0;i<n;i++)
          {
              if(arr[i]>largest)
               largest=arr[i];
          }
       cout<<largest<<endl;


     //2.Second Approch
      sort(arr.begin(),arr.end());
      cout<<arr[n-1]<<endl;
}