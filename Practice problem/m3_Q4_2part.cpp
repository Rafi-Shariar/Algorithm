/*
Write a program to convert an adjacency list to an adjacency matrix.  
You can assume the graph is undirected and unweighted.

 0 -> 1
 1 -> 0
 1 -> 2
 2 -> 1
 2 -> 3
 3 -> 2
 3 -> 1
 1 -> 3
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int nodes = 4;
    vector<int>list[nodes];

list[0] = {1};
list[1] = {0, 2, 3};
list[2] = {1, 3};
list[3] = {1, 2};

 //converting

 int matrix[nodes][nodes]={};

 for (int i = 0; i < nodes; i++)
 {
    for (int j = 0; j < list[i].size(); j++)
    {
       matrix[i][list[i][j]]=1;
    }
    
 }

 for (int i = 0; i < nodes; i++)  // O(n^2)
   {
        for (int j = 0; j < nodes; j++)
        {
            cout<<matrix[i][j]<<" ";
        }

        cout<<endl;
        
    }


 
    return 0;
}
