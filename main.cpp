#include <iostream>
#include <vector>

using namespace std;
/*
 * Start Testing Arrays
 */
//int centuryFromYear(int year);
int main(){
  int *val = new int;
  vector<int> inputSeq;
  do{
    cout << "Enter a val" << endl;
    cin >> *val;
    if (*val){
      //cout << "Val = " << *val << endl;
      inputSeq.push_back(*val);
    }else{
      cout << "Aborting" << endl;
      break;
    }
  }while(*val);
  for (vector<int>::iterator it = inputSeq.begin(); it != inputSeq.end(); ++it){
    cout << ' ' << *it;
  }
  cout << endl;
  return 0;
}
