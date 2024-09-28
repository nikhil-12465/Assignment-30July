
// merge sort using array:

// #include <iostream>
// #include <vector>
// using namespace std;

// void insert(vector<int> &a, int n)
// {
//     int value;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> value;
//         a.push_back(value);
//     }
// }

// void print(const vector<int> &a)
// {
//     int n=a.size();

//     for (int i = 0; i <n ; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// void merge(vector<int> &a, int low, int mid, int high) {
//     int left = low;
//     int right = mid + 1;
//     vector<int> temp;

//     while(left <= mid && right <= high) {
//         if (a[left] <= a[right]) {
//             temp.push_back(a[left]);
//             left++;
//         } else {
//             temp.push_back(a[right]);
//             right++;
//         }
//     }

  
//     while(left <= mid) {
//         temp.push_back(a[left]);
//         left++;
//     }

  
//     while(right <= high) {
//         temp.push_back(a[right]);
//         right++;
//     }

 
//     for (int i = low; i <= high; i++) { 
//         a[i] = temp[i - low];
//     }
// }


// void mergesort(vector<int> &a, int low, int high)
// {
//     if (low >= high)
//         return;
//     int mid = (low + high) / 2;

//     mergesort(a, low, mid);      
//     mergesort(a, mid + 1, high); 
//     merge(a, low, mid, high);            
// }

// int main()
// {
//     vector<int> a;
//     int n;

//     cout << "The number of elements in vector: " << endl;
//     cin >> n;

//     insert(a, n);

//     cout << "Before sorting: ";
//     print(a);

//     int low = 0;
//     int high = n - 1;

//     mergesort(a, low, high); // Sort the entire array  (function for sorting the array)

//     cout << "After sorting: ";
//     print(a);

//     return 0;
// }


//merge sort using linked list :

#include <iostream>

using namespace std;
struct node{
int data;
node * next ;
};
void creation(node*& start) {
    node* newnode, * temp;
    char choice;
    do {
        newnode = new node;  
        if (newnode == nullptr) {
            cout << "Memory allocation failed" << endl;
            return;
        }
        cout << "Enter the data: " << endl;
        cin >> newnode->data;
        newnode->next = nullptr;
        if (start == nullptr) {
            start = temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }

        cout << "Do you want to add another node? (y/n)" << endl;
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');
}

void print(node * &start){
node * temp=start;
while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;

}

}


node *findmiddle(node *start){
    node* slow=start;
    node* fast=start->next;
    while(fast!=nullptr && fast->next!=nullptr){
slow=slow->next;
fast=fast->next->next;
    }
    return slow ;
}

node *mergetwolists(node*list1,node* list2){
    node *dummy=new node;
    node * temp= dummy;
    while(list1!=nullptr && list2 != nullptr){
        if(list1->data < list2->data){
            temp->next=list1;
            temp=list1;
            list1=list1->next;
        }

        else{

            temp->next=list2;
            temp=list2;
            list2=list2->next;
        }
    }
    if(list1) temp->next=list1;
    else temp->next=list2;

    return dummy->next;
    
}
node *sortLL(node * start){
    if(start==nullptr||start->next==nullptr) return start;
    node * middle=findmiddle(start);
    node * right =middle->next;
    middle->next=nullptr;
    node * left =start;

    left=sortLL(left);
    right=sortLL(right);
    return mergetwolists(left,right);
}

int main(){
node * start=nullptr ;
creation(start);
cout<<"linked list:"<<endl;
print(start);
cout<<endl;
start=sortLL(start);
cout<<"the sorted linked list is:"<<endl;
print(start);
    return 0;
}