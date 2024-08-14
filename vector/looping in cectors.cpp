#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    // Input 5 elements
    for (int i = 0; i < 5; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    // Output elements using index
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    cout<<endl;
    
    v.insert(v.begin()+2,9);

    // Output elements using range-based for loop
   // for (int ele : v) {
     //   cout << ele << " ";
    //}
    
    //while  loop
     
     int index=0;
     while(index<v.size()){
     	cout<<v[index++]<<"  ";
     	
	 }

    return 0;
}

