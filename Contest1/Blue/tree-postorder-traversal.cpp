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


     void postOrder(Node *root) {
        
         if(root->left!=NULL){
             postOrder(root->left);
        }
         if(root->right!=NULL){
            postOrder(root->right);
        } 
         if(root!=NULL){
            cout<<root->data<<" ";
        }

    }
