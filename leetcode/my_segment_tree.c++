#include <bits/stdc++.h>
using namespace std;
int seg[100000 * 4], a[10000];// seg array length 4 times than normal array
void build_tree(int idx,int low,int high)
{
    if(low==high)// last elements of tree leaf
    {
        seg[idx] = a[low];
        return;
    }    
    int mid=(low+high)/2;
build_tree(2*idx+1, low, mid);//
build_tree(2*idx+2, mid+1, high);
seg[idx]=max(seg[2*idx+1],seg[2*idx+2]);// left & right half ka max store kr rhe
}
// kis interval me max xhahiye use l and r se denote 

int query(int idx,int low,int high,int l,int r)
{
if(low>=l&&high<=r)
{
    return seg[idx];
}
    int mid=(low+high)/2;
    int left=query(2*idx+1,low,mid,l,r);
    int right=query(2*idx+2,mid+1,high,l,r);
    return max(left,right);

}
int main()
// {build call kr
// query chala de q 
// for all l to r


}
