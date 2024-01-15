#include <iostream>
#include <string.h>
using namespace std;

bool compareString(string a, string b){
    if(a.length() != b.length()){
        return false;
    }
    else{
        int j =0;
        for(int i =0; i<a.length(); i++){
            if(a[i] != b[j]){
                return false;
            }
            j++;
        }
    }
    return true;
}

int main()
{
    string a = "bbcd";
    string b = "acda";

    cout << a.compare(b) << endl;

    // cin >> a >> b;
    
    // cout << compareString(a,b) << endl;
  return 0;
}