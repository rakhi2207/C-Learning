#include<iostream>
using namespace std;
void printEncoding(string str, string asf) {
  if (str.length() == 0 || str[0] == '0') {
    cout << '\n';
    return;
  }

  for (int i = 0; i < str.length() - 1; i++) {
    if (str[i + 1] == '0' && (str[i] != '1' && str[i] != '2')) {
      return;
    }
  }

  if (str[1] != '0') {
    cout << (char)(str[0] - '0' + 96);
    printEncoding(str.substr(1), asf + (char)(str[0] - '0' + 96));
  }

  if (str.length() >= 2 && str[2] != '0' && stoi(str.substr(0, 2)) <= 26) {
    char c = stoi(str.substr(0, 2)) + 96;
    cout << asf << c;
    printEncoding(str.substr(2), asf + c);
  }
}
int main()
{
    cout<<"Enter a string ";
    string str;
    cin>>str;
    printEncoding(str,"");
    return 0;
}