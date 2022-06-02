#include <iostream>
using namespace std;
int main() {
  string pt;
  int k;
  cin>>pt;
  cin>>k;
  string enc="";
  for(int i=0;i<pt.size();i++){
    if(isupper(pt[i])){
      enc+=char(int(pt[i]+k-65)%26+65);
    }
    else{
      enc+=char(int(pt[i]+k-97)%26+97);
    }
  }
  string dec="";
    for(int i=0;i<pt.size();i++){
    if(isupper(enc[i])){
      dec+=char(int(enc[i]+(26-k)-65)%26+65);
    }
    else{
      dec+=char(int(enc[i]+(26-k)-97)%26+97);
    }
  }
  cout<<enc<<endl;
  cout<<dec<<endl;
    return 0;
}
