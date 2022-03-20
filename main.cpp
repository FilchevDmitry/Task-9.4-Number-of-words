#include <iostream>
using namespace std;
int main() 
{
  cout << "Number-of-words" << endl;
  cout <<"input string :";
  string text;
	getline(cin,text);
  int words=0;
  for(int i=0;i<text.length();i++)
  {
    if(text[i]!=' ' && text[i+1]==' ' || text[i+1]=='\0')
    {
      if(text[i]==' ' && text[i+1]=='\0')
        break;
      else
        words++;
    }
  }
 	cout<<"Words "<< words<<endl;
  return 0;
}
