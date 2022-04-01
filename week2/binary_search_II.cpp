#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void binary_function_2(int size1)
{
    vector<int> arr(size1,0); //sorted array 
    int a;
    for (int i=0;i<arr.size();i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<size1-2;i++)
    {
        if (arr[i]+arr[i+1]==arr[i+2])
        {
            int count=0;
            cout<<i<<" "<<i+1<<i+2;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int l;
        cin>>l;
        binary_function_2(l);
    }
}