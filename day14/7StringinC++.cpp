/*
C++ strings are objects of pre-defined string classes in STL(Standard Template Library).
C++ strings have useful member functions .
C++ Strings are dynamic in nature. (their size can change at run time)
C++ Strings support a operators like +, == ,>,< ,etc.
C++ String are stored contiguously in memory.


INPUT FROM USER
getline(cin,str,',')    , is a delimiter

FOR EACH LOOP 
for (char ch: str){
}


EXAMPLE:- int main(){
string str= "apna college!";
for (int i=0;i<str.length();i++){
cout<<str[i]<<"_";
}
return 0;
}

EXAMPLE:- int main(){
string str= "apna college!";
for (char ch :str){
cout<<ch<<",";
}
return 0;
}


MEMBER FUNCTIONS IN STRINGS IN C++
str.length();
str.empty();
str.append();
str.insert();
str.erase();
str.substr();
str.find();
str.replace();
str.compare();
str.c_str();

*/