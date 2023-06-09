#include <iostream>
using namespace std;
int main() {
 for(int i=1 ; i<100 ; i++) {
 if(i%3==0) {
    continue;
 }
    {
    cout<<i<<"\n";
    }
 }
 return 0;
}
/**
#include <iostream>
using namespace std;
int main() {
  int n;
    cout<<"Enter the number ";
    cin>>n;
    if(n>1) {
        cout<<"Prime number";
    }
    else{
        cout<<"Not a prime number";
    }
    return 0;
}
**/
