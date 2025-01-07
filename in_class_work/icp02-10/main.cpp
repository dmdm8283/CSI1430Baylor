#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /*int scores[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i< 5; ++i){
        cout << scores[i] << " ";
    }
    cout << endl;
    */
   string file;
   ifstream inFile;
   const int size = 15;
   int odd[size], even[size];
   int countOdd = 0, countEven = 0;
   int value;
   double sumOdd = 0, sumEven = 0,
   avgOdd = 0, avgEven = 0;

   cout << "Enter filename";
   cin >> file;
   inFile.open(file);

   while(inFile >> value){
    if (value % 2 == 0){
        even[countEven] = value;
        ++countEven;
        sumEven += value;
    }else{
        odd[countOdd] = value;
        ++countOdd;
        sumOdd += value;
    }
   }

   inFile.close();
   avgEven = sumEven / countEven;
   avgOdd = sumOdd / countOdd;

   cout << " Even numbers" << endl;
   for (int i = 0; i < countEven; ++i){
    cout << even[i] << " ";
   }
   cout << endl;

   cout << " Odd numbers" << endl;
   for (int i = 0; i < countOdd; ++i){
    cout << odd[i] << " ";
   }
   cout << endl;

}