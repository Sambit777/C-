#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int x){
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;

        if (arr[mid]==x)
        {
            return  mid;
        }
        else if (arr[mid]>x)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
      return -1; 

}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;

cout<<binarySearch(arr,n,x)<<endl;

    return 0;
}