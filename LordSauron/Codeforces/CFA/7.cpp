#include <bits/stdc++.h>


using namespace std;


int main(){



    string a,b;


    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);


    if(a.compare(b) == 0)
        cout << 0;
    if(a.compare(b) > 0)
        cout << 1;
    if(a.compare(b) < 0)
        cout << -1;



    return 0;
}
