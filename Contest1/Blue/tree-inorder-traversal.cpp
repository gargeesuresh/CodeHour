/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void inOrder(Node *root) {
        if(root->left!=NULL){
             inOrder(root->left);
        }
        if(root!=NULL){
            cout<<root->data<<" ";
        }
         if(root->right!=NULL){
            inOrder(root->right);
        }   

    }
