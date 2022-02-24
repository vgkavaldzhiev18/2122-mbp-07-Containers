#include <set>
#include <iterator>
#include <iostream>
#include <cstring>
using namespace std;

set<int>::iterator it;

bool contains(set<int> setToCheck, string valueToCheck)
{
    for (it = setToCheck.begin(); it != setToCheck.end(); ++it)
    {
        if (*it == valueToCheck)
        {
            return true;
        }
    }
    return false;
}

void unionWith(set<int>, setA, set<int> setB)
{
    set<int> setTemp;

    for (it = setA.begin(); it != setA.end(); ++it)
    {
        setTemp.insert(*it);
    }
    for (it = setB.begin(); it != setB.end(); ++it)
    {
        if (!contains(setTemp, *it))
        {
            setTemp.insert(*it);
        }
        
    }
    for (it = setTemp.begin(); it != setTemp.end(); ++it)
    {
        cout << *it << " / ";
    }
}

int main()
{
    set<int> setA = { 1,2,3,4,5};
    set<int>setB = { 3,4,6,7,1};
    unionWith(setA, setB);
}
