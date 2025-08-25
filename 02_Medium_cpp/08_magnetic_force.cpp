#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isvalid(vector<int>& position,int mid,int m)
{

    int balls = 1,bucket = position[0];
    for(int i = 1;i<position.size();i++)
    {
        if(position[i]-bucket >= mid )
        {
            balls++;
            bucket = position[i];
        }
    }
    return balls>=m;
    
}
int magnetic_force_between_two_balls(vector<int>& position,int m )
{
    sort(position.begin(),position.end());
    int start = 1,end = position.back() - position.front();
    int ans = 0;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(isvalid(position,mid,m))
        {
            ans = mid;
            start = mid +1;
        }
        else 
        {
            end = mid -1;
        }
    }
    return ans;
    
}
int main() {

    int n, m;
    cin >> n >> m;   // number of positions, number of balls

    vector<int> position(n);
    for (int i = 0; i < n; i++) cin >> position[i];

    cout << magnetic_force_between_two_balls(position, m) << "\n";

    return 0;
}