#include <iostream> // Include the iostream library for input and output
#include <set> // Include the set library for using the set container
#include <bits/stdc++.h>

using namespace std; // Use the standard namespace

void set1(){
    set<int> s; // Declare a set of integers

    // Insert elements into the set
    s.insert(1);
    s.insert(2);
    s.insert(9);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(3); // Duplicate element, will not be added

    // Iterate over the set and print each element
    for (auto ele : s) {
        cout << ele << endl;
    }

    // Print the size of the set
    cout << "Size of set: " << s.size() << endl;

    // Print the count of the element '3' (1 if present, 0 if not)
    cout << "Count of 3: " << s.count(3) << endl;

    // Check if the element '3' is present in the set
    if (s.find(3) != s.end()) {
        cout << "Element is present" << endl;
    } else {
        cout << "Element is not present" << endl;
    }

    // Iterator erasing and iterating the elements(use of heavy pointers)
    auto it = s.end();
    it--;it--;
    
    auto it1 = s.begin();
    auto it2 = s.end();
    it1++;//
    it2--;

    s.erase(it1,it2);
    //s.erase(3);

    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;

    // Print the size of the set after deletion
    cout << "Size of set after deletion: " << s.size() << endl;

    // returns the iterator that points to an element that is >=number given
    auto it3 = s.lower_bound(5);
    cout<<*it3<<endl;

    // returns the iterator that points to an element that is >number given
    auto it4 = s.upper_bound(5);
    cout<<*it4<<endl;
}
void multi_set(){
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(2);

    for (auto it: ms){
        cout<<it<<" ";//iterate over the elements
    }
    cout<<endl;
    
    auto it = ms.find(1);

    cout<<*it<<endl;

    auto it1 = ms.erase(ms.find(1));

    for (auto it2: ms){
        cout<<it2<<" "; //delete the first occurance of the element
    }

    cout<<endl;

    /*rest are the similar properties like in set*/
    cout<<ms.count(1);
}
void unordered_set1(){
    unordered_set<int> us;

    us.insert(1);
    us.insert(1);
    us.insert(1);
    us.insert(2);
    us.insert(2);
    us.insert(2);
    us.insert(3);
    us.insert(3);
    us.insert(3);
    us.insert(4);
    us.insert(4);
    us.insert(4);

    for(auto it: us){
        cout<<it<<" ";
    }

    cout<<endl;
    auto it = us.find(1);//O(1) TC for searching and in some of the cases the O(N) TC is taken

    cout<<*it<<endl;
}
int main() {
    unordered_set1();
    return 0; // Return 0 to indicate successful execution
}

/*U can create and follow operation on multi and unordered set where they'll perform the same operation and output*/