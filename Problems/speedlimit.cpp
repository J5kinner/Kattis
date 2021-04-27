#include <iostream>
using namespace std;

int main()
{
    int n, s, t;
    while(true){
        cin >> n;
        if(n == -1){
            break;
        }
        int sum = 0;
        int t1 = 0;
        for(int i=0; i<n; i++){
            cin >> s;
            cin >> t; 
            int mult = s*(t-t1);
            t1 = t;
            sum += mult;
        }
        cout << sum << " miles\n";
    }
    
}
