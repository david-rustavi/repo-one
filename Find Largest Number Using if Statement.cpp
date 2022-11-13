#include <iostream>
using namespace std;

int main() {    
    float n1, n2, n3;

    cout << "შეიყვანე სამი ციფრი: ";
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
        cout << "უდიდესი ციფრი: " << n1;

    if(n2 >= n1 && n2 >= n3)
        cout << "უდიდესი ციფრი: : " << n2;
    
    if(n3 >= n1 && n3 >= n2)
        cout << "უდიდესი ციფრი: : " << n3;
  
    return 0;
}