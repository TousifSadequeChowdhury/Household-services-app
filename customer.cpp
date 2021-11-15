#include <iostream>
using namespace std;
class Customer
{
private:
    string name, email, password, location, contact_no;
    int age;
    bool verification;

public:
    void setPassword(string p)
    {
        password = p;
    }
    string getPassword()
    {
        return password;
    }
    void setLocation(string l)
    {
        location = l;
    }
    string getLocation()
    {
        return location;
    }

    void setname(string n)
    {
        name = n;
    }
    string getname()
    {
        return name;
    }
    void setEmail(string e)
    {
        email = e;
    }
    string getEmail()
    {
        return email;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
    void setvarification(bool b)
    {
        verification = b;
    }
    bool getvarification()
    {
        return verification;
    }
};

int main()
{
    string name, email;
    Customer customer;
    customer.setAge(13);

    cout << "Enter Name" << endl;
    cin >> name;
    cout << "Enter Email" << endl;
    cin >> email;
    customer.setname(email);
    customer.setname(name);
    cout << "name entered :" << customer.getname() << endl;
    cout << "email entered :" << customer.getEmail() << endl;
    cout << "customer age: "<<customer.getAge() << endl;


    // if (customer.getname() != "NULL" && customer.getAge() != NULL)
    // {
    //     customer.setvarification(true);
    //     cout << customer.getvarification();
    // }
    // else
    //     customer.setvarification(false);
    //     cout << customer.getvarification();
}
