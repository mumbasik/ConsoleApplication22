

#include <iostream>
using namespace std;
//N1
void diff(int startday = 7, int stardmonth = 4, int startyear = 2022, int endday = 4, int endmonth = 3, int endyear = 2023) 
{
    int month3 = 31;
    int month2 = 28;
    int month1 = 31;
    int res1;
    res1 = (month1 + month2 + month3) + startday;
    int endmonth2 = 28;
    int endmonth1 = 31;
    int res2;
    res2 = (endmonth1 + endmonth2) + endday;
    int res3;
    res3 = res1 - res2;
    if (startyear % 4 == 0 && startyear % 100) {
        cout << "Is leap year" << "\n";
        
    }
    cout << "difference between the days" << res3 << "\n";
}
//N2
void summ(int ar[], int size) {
    int res1 = 0;
    int res2 = 0;
    for (int i = 0; i < size; i++) {
        
        res1 += ar[i];
        
        res2 = (res1 / size);
        
    }
    cout << res2 << "\n";
    
}
//N3
void numbs(int arr[], int sizee) {
    int minus = 0;
    int plus = 0;
    int zero = arr[0];
    for (int i = 0; i < sizee; i++) {
        if (minus > arr[i]) {
            minus = arr[i];
        }
        else if (plus < arr[i]) {
            plus = arr[i];
        }
        else if (zero == arr[i]) {
            zero = arr[i];
        }

    }
    cout << minus << "\n";
    cout << plus << "\n";
    cout << zero << "\n";
}


int main()
{
    const int size = 5;
    int arr[] = { 1 , 4 , 3, 2, 9 };
    summ(arr, size);
    const int sizee = 6;
    int ar[] = { -1, 2, 4, -4 , 6, 11 };
    numbs(arr, sizee);
    diff();
  

    
        
    
}

