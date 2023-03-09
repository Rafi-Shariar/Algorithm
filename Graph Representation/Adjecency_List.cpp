#include<bits/stdc++.h>
using namespace std;
int main(){

 int nodes = 4;
 vector<int>adj_list[nodes]; //O(1)  // space - O(n)

 // O(Edge)   ... bcz nodes barle amdr aro ekta entry kora lagbe. + worse case a O(E^2) hobe. So time complexity O(n^2)
 //space - O(n^2)
 adj_list[0] = {1};
 adj_list[1] = {0, 2, 3};
 adj_list[2] = {1, 3};
 adj_list[3] = {1, 2};

 for (int i = 0; i < nodes; i++) // O(2*Edge) -> O(E) -> O(n^2)
 {
    cout<<i<<"--> ";
    for (int j = 0; j < adj_list[i].size(); j++)
    {
        cout<<adj_list[i][j]<<" ";
    }

    cout<<endl;
    
 }
 

    return 0;
}