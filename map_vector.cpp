@@ -0,0 +1,40 @@
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
	string str;
	vector<string> v;

	map<string, string> mapStudent;
	map<string, string>::iterator iter;
	map<string, string>::reverse_iterator iter_r;

	while(cin>>str)
		v.push_back(str);
	//string s("r123");
	//string v("student_first");
	mapStudent.insert(pair<string, string>("r000", "student_zero"));
	mapStudent[v[0]]=v[1];
	mapStudent["r456"]="student_second";

	for (iter=mapStudent.begin(); iter!=mapStudent.end(); iter++)
		cout<<iter->first<<" "<<iter->second<<endl;
	for (iter_r=mapStudent.rbegin(); iter_r!=mapStudent.rend(); iter_r++)
		cout<<iter_r->first<<" "<<iter_r->second<<endl;

	iter=mapStudent.find("r123");
	mapStudent.erase(iter);

	iter=mapStudent.find("r123");

	if (iter!=mapStudent.end())
		cout<<"find, the value is "<<iter->second<<endl;
	else
		cout<<"Do not Find"<<endl;
	return 0;

}