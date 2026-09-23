#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={0,1,2,3,4,5,6,7,8,9};
//iterator is like pointer in some way
// it was point the object
    vector<int>:: iterator it;

    for(it=v.begin();it != v.end();it++){
        cout<<*it<<" ";
    }

    cout<<"\n";

// [PRINT REVERSE VECTOR]

    vector<int>:: reverse_iterator it2;

    for(it2=v.rbegin();it2 != v.rend();it2++){
        cout<<*it2<<" ";
    }

    cout<<endl;

    vector<int> vowels={'a','e','i','o'};
    cout<<"size of vector is : "<<vowels.size()<<endl;
    cout<<"max size of vector is : "<<vowels.max_size()<<endl;
    cout<<"capacity of vector is : "<<vowels.capacity()<<endl;
    vowels.push_back('u');
    cout<<"size of vector is : "<<vowels.size()<<endl;
    cout<<"max size of vector is : "<<vowels.max_size()<<endl;
    cout<<"capacity of vector is : "<<vowels.capacity()<<endl;
// now we resize our vector 
    vowels.resize(3);
//---->>with the help of [shrink_to_fit()] this function
// to check this function :- code was at the end of this file
    char ch;
// if we increase the size of vector, the other value become zero
    for(int i=0;i<vowels.size();i++){
    // this function is excess the value of vector
        ch = vowels.at(i);
        cout<<ch<<" ";
    }
    
    vector<int> v2;
    int val;
    do{
        cout<<"enter element (0 for exit) : ";
        cin>>val;
        v2.push_back(val);
    }while(val);
    v2.pop_back();
    v2.pop_back();
    cout<<"vector element after pop back are : ";
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
// we can 
    cout<<"\n";
    vector<int> vecan={1,2,3,4,5,6,7,8,9};
// with the help of [vecan.clear] this functio we can distroy vector
    //vecan.erase(vecan.begin()+3);   // 4th element will erase
    vecan.erase(vecan.begin()+1,vecan.begin()+3);
    for(int i=0;i<vecan.size();i++){
            cout<<vecan.at(i)<<" ";
        }

//[ACCESS THE LAST ELEMENT OF VECTOR]
        vector<int> ve1 = {1,2,3,4,5,6,7,8,9};
        cout<<"\n use of back() in vector is :- "<<ve1.back()<<endl;
    return 0;
}



// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> v;

//     // Fill the vector
//     for (int i = 0; i < 100; ++i)
//         v.push_back(i);

//     std::cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << '\n';

//     // Remove elements
//     v.resize(10);
//     std::cout << "After resize - Size: " << v.size() << ", Capacity: " << v.capacity() << '\n';

//     // Shrink capacity
//     v.shrink_to_fit();
//     std::cout << "After shrink_to_fit - Size: " << v.size() << ", Capacity: " << v.capacity() << '\n';

//     return 0;
// }