#include <bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int g,e,m;
    Student(string name, int g, int e, int m){
        this->name = name;
        this->g = g;
        this->e = e;
        this->m = m;
    }
    bool operator <(Student &other){
        if(other.g!=this->g) return this->g > other.g; // 국어 다를때 국어 감소
        else if(other.e!=this->e) return this->e < other.e; // 영어 다를때 영어 증가
        else if(other.m!=this->m) return this->m > other.m; 
        else return this->name < other.name;
        
    }
};

int n;
vector<Student> students;

int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++){
        string s;
        int g,e,m;
        cin >> s >> g >> e >> m;
        students.push_back(Student(s,g,e,m));
    }
    sort(students.begin(),students.end());
    
    for(int i=0; i<n; i++){
        cout << students[i].name << '\n';
    }
    
}
