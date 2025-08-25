#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector<int> &pages, int mid, int m)
{
    int stud = 1, allot = 0;
    for (int i = 0; i < pages.size(); i++)
    {
        if(pages[i] >mid) return false;
        if (allot + pages[i] <= mid)
        {
            allot += pages[i];
        }
        else  
        {
            stud++;
            allot = pages[i];
        }
    }
    return stud<=m;
}
int book_allocation(vector<int> &pages, int m)
{
    if (m > pages.size())
        return 0;
    int sum = 0;
    for (int i = 0; i < pages.size(); i++)
    {
        sum += pages[i];
    }
    int start = 0, end = sum, ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isvalid(pages, mid, m))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    return 0;
}