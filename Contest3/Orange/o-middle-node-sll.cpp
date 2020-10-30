#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

class SinglyLinkedListNode {
    public:
        long data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(long node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(long node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep) {
    while (node) {
        cout << node->data;

        node = node->next;

        if (node) {
            cout << sep;
        }
    }
}




/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(SinglyLinkedListNode* head)
{
    SinglyLinkedListNode* temp = head;
    
    if(temp == NULL)
        return -1;
    
   int count = 0;
   
    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
    count = count/2 + 1; 
    
    temp = head;
    
    while(temp!=NULL)
    {
        if(count == 1)
            return temp->data;
        
        temp = temp->next;
        count--;
    }
    return 1;
    
}
int main()
{
    SinglyLinkedList* l = new SinglyLinkedList();

    string l_count_temp;
    getline(cin, l_count_temp);
    int middle = 0;

    int l_count = stoi(ltrim(rtrim(l_count_temp)));

    for (int i = 0; i < l_count; i++) {
        string l_item_temp;
        getline(cin, l_item_temp);

        long l_item = stol(ltrim(rtrim(l_item_temp)));

        l->insert_node(l_item);
    }
    
    middle = getMiddle(l->head); 
    
    //print node
    cout << middle << endl;

  

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
