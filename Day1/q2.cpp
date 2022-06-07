#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    vector<vector<long long int>> triangle;
    
    for(int i=0;i<n;i++){
        vector<long long int> a;
        for(int j=0;j<i+1;j++){
            if( i==0 || i==1)
                {a.push_back(1);}
            else if (j>0 && j<triangle[i-1].size())
                {a.push_back(triangle[i-1][j-1]+triangle[i-1][j]);}
            else
                {a.push_back(1);}
        }
        triangle.push_back(a);
        
    }
    
    for(int i=0;i<triangle.size();i++){
        for(int j=0;j<triangle[i].size();j++){
            cout<< triangle[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}