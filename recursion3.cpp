#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n)
{ 
  cin>>n;
    int f=1;
    
    
    
    
    for(int i=n;i>=1;i--)
    {
       
        f=f*i;
       
      
        
    }
    cout<<f;
    
    return f;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
