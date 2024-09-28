
// for a number :


#include <iostream>
#include <queue>
#include <cmath>

using namespace std;


struct Node {
    int data;
    Node* next;
};


void insert(Node*& start, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (start == nullptr) {
        start = newNode;
    } else {
        Node* temp = start;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


int findMax(Node* start) {
    int max = start->data;
    Node* temp = start->next;

    while (temp != nullptr) {
        if (temp->data > max) {
            max = temp->data;
        }
        temp = temp->next;
    }
    return max;
}


int countDigits(int maxNumber) {
    int digits = 0;
    while (maxNumber > 0) {
        maxNumber /= 10;
        digits++;
    }
    return digits;
}

void printList(Node* start) {
    Node* temp = start;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void radixSort(Node*& start) {
   
    int maxNumber = findMax(start);
    int maxDigits = countDigits(maxNumber);

  
    queue<Node*> queues[10];

    
    for (int digitPos = 0; digitPos < maxDigits; digitPos++) {
        // Distribute nodes into queues based on the current digit
        Node* temp = start;
        while (temp != nullptr) {
            int digit = (temp->data / static_cast<int>(pow(10, digitPos))) % 10;
            queues[digit].push(temp);
            temp = temp->next;
        }

        
        Node* newstart = nullptr;
        Node* newTail = nullptr;
        for (int i = 0; i < 10; i++) {
            while (!queues[i].empty()) {
                Node* node = queues[i].front();
                queues[i].pop();
                node->next = nullptr;

                if (newstart == nullptr) {
                    newstart = newTail = node;
                } else {
                    newTail->next = node;
                    newTail = node;
                }
            }
        }
        start = newstart;  // Update the head of the linked list
    }
}

int main() {
    Node* start = nullptr;
    int n, value;

  
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insert(start, value);
    }

    cout << "Original List: ";
    printList(start);

    // Perform radix sort on the linked list
    radixSort(start);

    cout << "Sorted List: ";
    printList(start);

    return 0;
}
