#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
  if (s[8] == 'A') {
    // 12:XX:XXAM
    if (s[0] == '1' && s[1] == '2')
      s[0] = '0', s[1] = '0';

  } 
  // !(a==1 && b == 2) = a!=0 || b!=0
 
    else if(s[0] != '1' or s[1] != '2'){

      int temp = (s[0] - '0') * 10 + (s[1] - '0') + 12;
      s[1] = (temp % 10 + '0');
      temp /= 10;
      s[0] = (temp + '0');
      if (s[0] == '2' && s[1] == '4')
        s[0] = '0', s[1] = '0';
    }
    string ans = "";
    for(int i  = 0;  i< 8 ; i ++)
        ans += s[i] ;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
