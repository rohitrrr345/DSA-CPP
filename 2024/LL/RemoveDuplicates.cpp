#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    void append(int val) {
        if (head == nullptr) {
            head = new Node(val);
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = new Node(val);
        }
    }

    void printList() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void removeDuplicates() {
        Node* current = head;
        while (current != nullptr) {
            Node* runner = current;
            while (runner->next != nullptr) {
                if (runner->next->data == current->data) {
                    // Remove the duplicate node
                    Node* duplicate = runner->next;
                    runner->next = runner->next->next;  // Update next pointer
                    delete duplicate;  // Free memory of duplicate node
                } else {
                    runner = runner->next;  // Move to the next node
                }
            }
            current = current->next;  // Move to the next node in the list
        }
    }

private:
    Node* head;
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(1);

    std::cout << "Original list: ";
    list.printList();

    list.removeDuplicates();

    std::cout << "List after removing duplicates: ";
    list.printList();

    return 0;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->val==temp->next->val){
                ListNode *del=temp->next->next;
                
                delete(temp->next);
                temp->next=del;
            }
            else temp=temp->next;
            
        }
        return head;

    }
};