/* Can be tested here https://practice.geeksforgeeks.org/problems/n-queen-problem/ */

#include <bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define mod(x) ((x)<0 ? -(x) : (x))
#define pb pop_back
int e = 0;
bool issafe(vector<int>& res,int j,int i){
    if(i == 0){
        return true;
    }
    else{
        for(int k = 0 ;k <res.size();k++){
            if(res[k] == j ||mod(res.size()-k) == mod(res[k]-j)){
                return false;
            }
        }
    }
    return true;
}

void queens_palcement(vector <int>& res, int row_num ,int n){
    if(row_num == n){
        cout<<"[";
        for(auto it : res){
        cout<<it+1<<" ";
       }
       cout<<"] ";
    }
    else{
        for(int j = 0 ; j < n ; j++){
            if(issafe(res,j, row_num)){
                res.eb(j);
                queens_palcement(res,row_num+1,n);
                res.pb();
            }
        }
    }
}


int main(){
    int t ;
    cin>>t;
    while(t--)
    {
    //cout<<"Enter n";
        int n;
        cin >>n;
        if(n <= 3){
            if(n != 1)
            {cout<<-1<<endl;
            }
            else{
                cout<<"[1 ]"<<endl;
            }
            continue;
        }
        vector <int> res;
        queens_palcement(res,0,n);
        cout<<endl;}
    return 0;
}


