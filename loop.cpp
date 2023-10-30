#include <iostream>
using namespace std;
int main()
{
  int num;
  float input, sum=0, avg;
  cin >> num; 
    for(int i = 1; i <= num; i++){
      cin >> input;
      sum += input;
    }
  avg = sum / num;
  cout << "average = " << avg << endl;

return 0;
}
