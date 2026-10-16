/******************************************************************************
# Author:           Lucy P
# Lab:              Assignment 8
# Date:             May 31, 2021
# Description:      calculates your numeric and letter grade from given 
#                   assignment scores, midterm exam score, and final exam score.
# Input:            numAssigns as int, numScore as double, 
# Output:           decimalGrade as double, letterGrade as char, prompt as string.
# Sources:          zybooks, assignment 7 and 8 resources.
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//declare constants
const int MAX_VALS = 101;

int main(){
  int userArray[MAX_VALS];
  int userVals = 0;
  int startIndex = 0;
  int value;
  int tempVar;

  cout << "Enter number of values: ";
  cin >> userVals;

  cout << "Enter list of values: ";
  for(int i = 0; i < userVals; ++i){
    cin >> userArray[i];
  }

  cout << "Enter start index: ";
  cin >> startIndex;

  for(int i = 0; i < startIndex - i; i++){
    for(int i = userVals; i > 0; i--){
      tempVar = userArray[userVals];
      userArray[i] = userArray[i - 1];
    }

  userArray[0] = tempVar;
  userArray[userVals] = '\0';
  }

return 0;
}