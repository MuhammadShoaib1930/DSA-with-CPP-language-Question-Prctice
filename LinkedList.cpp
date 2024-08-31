#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
    Node(int data , Node *next){
        this->data = data;
        this->next = next;
    }
};
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    Node* node2 = new Node(50);
    Node* node1 = new Node(5,node2);
    Node* head =new Node(1,node1);
    cout<< head->data;
    cout<< head->next->data;

    cout<< head->next->next->data;

    return 0;
}
