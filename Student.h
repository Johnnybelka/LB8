using namespace std;


class student{
    string name;
    string group;
public:
    student(string  name = "N", string sname = "N", string group = "N");
    void input ();
    ~student(){};
    friend ostream &operator<<(ostream &out, const student &student);
};