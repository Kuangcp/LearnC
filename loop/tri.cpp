#include<iostream>
using namespace std;
int space(int line, int n){
    for(int i=n-line; i>0; i--){
        cout << ' ';
    }
    for(int i=0; i<line; i++){
        cout << line << ' ';
    }
    cout << endl;
    return 0;
}
int main(){
    int n, i, j;
    cin >> n;
    for(i=1; i<=n; i++){
       space(i, n);
    }
    cout<<"\nhello world"<<endl;
    return 0;
}

//  21:44:54  kcp@myth  ...c/LearnC/loop   master ✘ ✭ 
// $ kc tri.cpp
// 8
//        1
//       2 2
//      3 3 3
//     4 4 4 4
//    5 5 5 5 5
//   6 6 6 6 6 6
//  7 7 7 7 7 7 7
// 8 8 8 8 8 8 8 8
// 
// hello world