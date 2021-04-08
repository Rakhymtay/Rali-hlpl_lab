#include "std_lib_facilities.h"

//Step 10.1
struct Point {
    int x;
    int y;
};

//Step 10.2
istream& operator>>(istream& is, Point& p)
{
    char ch1;
    if (is >> ch1 && ch1 != '(') {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    char ch2;
    char ch3;
    int xpoint;
    int ypoint;
    is >> xpoint >> ch2 >> ypoint >> ch3;
    if (!is || ch3 != ')') {
        if (is.eof()) return is;
        error("bad point");
    }
    p.x = xpoint;
    p.y = ypoint;
    return is;
}
//Step 10.3
ostream& operator<<(ostream& os, Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}

void read_from_file(vector<Point>& points, string& name)
{
    ifstream ist {name};
    ist.exceptions(ist.exceptions()|ios_base::badbit);

    if (!ist) error("can't open input file ", name);
    for (Point p; ist >> p; )
        points.push_back(p);
}

int main()
try {
    cout << "Please enter seven points";
    vector<Point> original_points;

    while (original_points.size() < 7) {
        Point p;
        cin >> p;
        original_points.push_back(p);
    } 

    for (int i = 0;i<original_points.size();i++)
        cout << original_points.at(i)<<'\n';
//Step 10.4
    string fname = "mydata.txt";
    ofstream ost (fname);
    if (!ost) error("could not open file ", fname);

    for (int i = 0;i<original_points.size();i++){
        ost << original_points.at(i);
        }
//Step 10.5
    ost.close();

    vector<Point> processed_points;
    
    read_from_file(processed_points, fname);
//Step 10.6
    for (int i = 0;i<processed_points.size();i++){
    cout<<processed_points.at(i)<<'\n';
    }
//Step 10.7
    if (original_points.size() != processed_points.size())
        cout << "Something's wrong!\n";
}
catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
