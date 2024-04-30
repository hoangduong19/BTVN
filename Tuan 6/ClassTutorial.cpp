#include <iostream>
#include <sstream>
using namespace std;

class Student {
private:
    int age, standard;
    std::string first_name;
    std::string last_name;
public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_first_name(std::string s)
    {
        first_name = s;
    }
    std::string get_first_name()
    {
        return first_name;
    }
    void set_last_name(std::string s)
    {
        last_name = s;
    }
    std::string get_last_name()
    {
        return last_name;
    }
    void set_standard(int a)
    {
        standard = a;
    }
    int get_standard()
    {
        return standard;
    }
    std::string to_string()
    {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}