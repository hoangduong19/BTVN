#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try {
        int num = std::stoi(S);//neu thanh cong thi se std::cout << num, khong thi sang khoi catch
        std::cout << num;
    }
    catch (std::invalid_argument const& ex) //neu co chu ko phai so
    {
        std::cout << "Bad String";
    }
    catch (std::out_of_range const& ex)// neu so qua lon
    {
        std::cout << "Bad String";
    }
    return 0;
}
