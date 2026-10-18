#include <iostream>
#include <iomanip>
using namespace std;

//declare constants
const int MAX_VALS = 101;

int main(){
  int userArray[MAX_VALS];
  int userVals = 0;
  int startIndex = 0;

  cout << "Enter number of values: ";
  cin >> userVals;

  cout << "Enter list of values: ";
  for(int i = 0; i < userVals; ++i){
    cin >> userArray[i];
  }

  cout << "Enter start index: ";
  cin >> startIndex;

  for(int i = 0; i < userVals - startIndex; i++){
    int tempVal = userArray[userVals - 1];
    for(int j = userVals - 1; j > 0; j--){
      userArray[j] = userArray[j - 1];
    }

  userArray[0] = tempVal;
  }

  for(int i = 0; i < userVals; i++){
    cout << userArray[i] << " ";
  }
  cout << endl;

return 0;
}