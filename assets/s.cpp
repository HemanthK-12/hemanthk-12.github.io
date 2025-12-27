#include <bits/stdc++.h>
using namespace std;
string normalizeNumber(const string &num)
{
    string digits;
    for(char c:num)
        if (isdigit(c))
        	digits += c;
    if(digits.length()>10)
        digits = digits.substr(digits.length() - 10);
    return digits;
}
int main()
{
    ifstream file("./contacts_prefinal.vcf");
    unordered_map<string, vector<string>> phoneToNames;
    string line, currentName, currentPhone;
    while (getline(file,line))
    {
        if (line.rfind("FN:",0)==0)
            currentName=line.substr(3);
        else if(line.find("TEL;CELL")!=string::npos)
        {
            size_t pos=line.find(":");
            if (pos!=string::npos)
            {
                currentPhone=normalizeNumber(line.substr(pos+1));
                phoneToNames[currentPhone].push_back(currentName);
            }
        }
    }
    cout<<"\nDuplicate Contacts Found:\n";
    cout<<"-------------------------\n";
    bool found=false;
    for (auto &entry : phoneToNames)
    {
        if(entry.second.size()>1)
        {
            found=true;
            cout<<"Phone: " <<entry.first<<"\n";
            cout<<"Names:\n";
            for (const auto &name:entry.second)
                cout << "  - " << name << "\n";
            cout << "\n";
        }
    }
    return 0;
}

