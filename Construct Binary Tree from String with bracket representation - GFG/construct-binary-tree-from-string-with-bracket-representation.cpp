//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
   Node *treeFromString(string str){
        // code here
        int lb =0, up = str.size()-1;
        if(lb<=up)
        {
            string s= "";
            int i;
            for(i=0;i<str.size();i++)
            {
                if(str[i]=='(')    
                {
                    lb = i+1;
                    break;
                    
                }
                else
                s+=str[i];
            }
            int val = stoi(s);
            Node *root = new Node(val);
            if(i==str.size())
            return root;
            int open =1, left;
        
            for(int i=lb;i<str.size();i++)
            {
                if(str[i]=='(')
                open++;
                else if(str[i]==')')
                open--;
                if(open==0)
                {
                    left = i;
                    break;
                }
            }
            root->left = treeFromString(str.substr(lb, left-lb));
            if(up>=left+2)
            root->right = treeFromString(str.substr(left+2,up-left-2 ));
            return root;
        }
        return nullptr;

}
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends