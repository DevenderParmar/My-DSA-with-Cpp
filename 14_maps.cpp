#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    map<string,int> m;//It is a pair of key and its element , in a map a key only hold a single and unique value.
    m["tv"] = 500;
    m["phone"] = 1000;
    m["radio"] = 399;
    m["printer" ]= 700;

    m.insert({"clock",5000});// or
    m.emplace("clock",6000); // they both are used to insert new elemenet;
    for(auto pair:m)  // as it hold a pairs so we cant use normal iterator ;
    {
        cout<<pair.first<< " "<< pair.second << endl; // when you we the output it will be in sorted manner aplhabetically from first letter.

    }
    cout<< "count of tv key = "<< m.count("tv")<< endl;
    cout<< "the value of a key = "<< m["tv"]<<endl;

    m.erase("radio");// used to erase 
    if(m.find("radio") != m.end())// found function return true is the key exist and false if it isnt.
    {
        cout<< "THe key is found "<<endl;
    }
    else 
    cout <<"the key does not found"<<endl;


    // Multi_Map = It is used to store multiple key values inside the map.

    cout<<"\n\nMulti Map\n\n";
    
    multimap<string,int> mm;
    mm.emplace("tv",500);
    mm.emplace("tv",700);
    mm.emplace("tv",800);
    mm.emplace("tv",900);
    mm.emplace("tv",9000);
    mm.emplace("tv",400);
    mm.erase(mm.find("tv"));
    for(auto valeu:mm)
    {
        cout<<valeu.first<< " "<<valeu.second  <<endl;
    }
    
    //Unordered_map = we know regular map print in a sorted manner but if we want to print with in a random manner we use this.
    cout<<"\n\n UnorderedX Map\n\n";

    unordered_map<string,int> um;
    um["phone"] = 200;
    um["charger"] = 300;
    um["tv"] = 100;
    um["monitor"] = 400;
    um["laptop"] = 500;

    for(auto p: um)
    {
        cout<<p.first<< " "<< p.second<<endl;
    }
 return 0;
}