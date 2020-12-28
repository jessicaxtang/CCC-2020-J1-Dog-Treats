#include <iostream>
using namespace std;

int main() {
  int sm, md, lg;
  cin >> sm >> md >> lg;
  int total = sm + 2*md + 3*lg;

  if (total >= 10){
    cout << "happy";
  } else {
      cout << "sad";
  }
}