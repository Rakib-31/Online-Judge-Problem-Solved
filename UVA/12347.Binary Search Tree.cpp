#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    struct node* left;
    struct node* right;

};

struct node* newNode(int key){

    struct node* temp = new node();
    temp->data = key;
    temp->left = temp->right = NULL;

    return temp;
};

struct node* bst(struct node* root,int key){

    if(root == NULL) return newNode(key);

    if(root->data < key)
        root->right = bst(root->right,key);
    else if(root->data > key)
        root->left = bst(root->left,key);

    return root;

}

void postorder(struct node* root){

    if(root == NULL) return;


    postorder(root->left);

    postorder(root->right);
    printf("%d\n",root->data);

}

int main(){

    int i = 0,arr[100000];
    struct node* root = NULL;

    while(scanf("%d",&arr[i]) != EOF)
        i++;

    int j = i;

    root = bst(root,arr[0]);

    for(int i = 1; i < j; i++){
        bst(root,arr[i]);
    }

    postorder(root);

    return 0;
}
