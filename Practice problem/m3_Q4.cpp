/*
Write a program to convert an adjacency matrix to an adjacency list.  
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

    int nodes=4;
    int matrix[nodes][nodes]={};

    matrix[0][1] = 1;
    matrix[1][0] = 1;
    
    matrix[1][2] = 1;
    matrix[2][1] = 1;

    matrix[2][3] = 1;
    matrix[3][2] = 1;

    matrix[3][1] = 1;
    matrix[1][3] = 1;


  //converting to list
    vector<int>list[nodes];

    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            if (matrix[i][j]==1)
            {
                list[i].push_back(j);
            }
             
        }
        
    }


   for (int i = 0; i < nodes; i++)
   {
    cout<<i<<" ---> ";
     for (int j = 0; j < list[i].size(); j++)
     {
        cout<<list[i][j]<<" ";
     }

     cout<<endl;
     
   }
       



    

    return 0;
}