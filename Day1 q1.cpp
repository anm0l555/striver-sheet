#include <bits/stdc++.h> 
using namespace std;
int main()
{
    vector<vector<int>> matrix{{7,19,3},{4,21,0}};
	
    vector<int> a;
    vector<int> b;
    for (int i=0;i<matrix.size();i++){
        for (int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for (int i=0;i<matrix.size();i++){
        for (int j=0;j<matrix[0].size();j++){
            if( matrix[i][j]==0){
                // cout<<"i"<<" "<<i;
                a.push_back(i);
                // cout<<"j"<<" "<<j;
                b.push_back(j);
            }
        }
    }
    
    for(int i=0;i<a.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            matrix[a[i]][j]=0;
        }
    }
    
    
   
    for(int i=0;i<b.size();i++){
        for(int j=0;j<matrix.size();j++){
            matrix[j][b[i]]=0;
        }
    }
    // Printing matrix
    for (int i=0;i<matrix.size();i++){
        for (int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}