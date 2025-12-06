/* Write a program for a language course center. 
Read N students and tuition fee for each student. 
If fee > 12000 print “Intensive Course”. 
Print total income and count of intensive course students*/


#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "Enter the numbers of students: ";
    cin >> number;
    
    int fees[number] = {0};
    int count = 0;
    
    for (int i = 0; i < number; i++){
        cout << "Enter the fee of student " << i + 1 << ": ";
        cin >> fees[i];
        if(fees[i] > 12000){
            cout << "Intensive course" << endl;
            count++;
        }
    }
    
    int sum = 0;
    for (int i = 0; i < number; i++){
        sum = sum + fees[i];
    }
    cout << "Total students for intensive course are: " << count << endl;
    cout << "Total income is: " << sum;
    
    return 0;
}
