#include<bits/stdc++.h>
using namespace std;

map<char,vector<string>>groupstu(vector<string>&arr)
{
    map<char,vector<string>>arr1;
    for(auto it:arr)
    {
        char ele = it[0];
        arr1[ele].push_back(it);
    }
    return arr1;
}

int main()
{
    vector<string>arr={"Ajay","Nitish","Abhay","Ram","Ranjit","Rohan","Nirbhay","Nisha","Mohini","Kamini","Pushpa","Phulkumari"};
    map<char,vector<string>>ans = groupstu(arr);
    for(auto it:ans)
    {
        cout<<it.first<<" ";
        for(auto ele:it.second)
        {
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
}