#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size()-1;
    
    while(s<e) {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
            
        int sum = val1 + val2 + carry;   
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    return reverse(ans);
}

int main() {
    vector<int> num1 = {1, 2, 0, 0};
    vector<int> num2 = {2, 7, 4};
    int k1 = 34;
    int k2 = 181;

    vector<int> result1 = findArraySum(num1, num1.size(), k1);
    vector<int> result2 = findArraySum(num2, num2.size(), k2);

    cout << "Result 1: ";
    for (int i = 0; i < result1.size(); ++i) {
        cout << result1[i] << " ";
    }
    cout << endl;

    cout << "Result 2: ";
    for (int i = 0; i < result2.size(); ++i) {
        cout << result2[i] << " ";
    }
    cout << endl;

    return 0;
}

