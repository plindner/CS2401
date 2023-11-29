#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> breakups(string str)
{
   vector<string> result;
   if (str.length() <= 1) { result.push_back(str); }
   else
   {
      string first1 = str.substr(0, 1);
      string rest1 = str.substr(1);
      string first2 = str.substr(0, 2);
      string rest2 = str.substr(2);
      if (str.length() == 2)
      {
         result.push_back(str);
         result.push_back(first1 + " " + rest1);
      }
      else
      {
         vector<string> shorter1 = breakups(rest1);
         for (string s : shorter1)
         {
            result.push_back(first1 + " " + s);
         }
         vector<string> shorter2 = breakups(rest2);
         for (string s : shorter2)
         {
            result.push_back(first2 + " " + s);
         }
      }
   }
   return result;
}

int main()
{
   vector<string> result = breakups("amber");
   for (int i = 0; i < result.size(); i++) 
   {
      cout << result[i] << endl;
   }
   
   return 0;
}