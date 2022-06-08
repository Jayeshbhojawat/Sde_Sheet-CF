#include <bits/stdc++.h>
using namespace std;
// queue me push krenge
// sare nodes + indexes
// map me update index as queue got empty
// procedure

void bottom(Node * root)

{
    vector<int> ans;
    if(root==NULL)
        return;
    map<int, int> mp;
    queue<pair<Node *, int>> q;
    q.push(root, 0);
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        Node *root = it.first;
        int index = it.second;
        mp[index]=root->data;
        if(root->right!=NULL)
            q.push(root->right, index + 1);
        
        if(root->left!=NULL)
            q.push(root->left, index - 1);
        
     }
     for(auto it:mp)
     {
         ans.push_back(it.second);
     }

}
int main()
{

}
