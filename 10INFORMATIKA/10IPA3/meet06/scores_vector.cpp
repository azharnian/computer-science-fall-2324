#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    vector<int> scores;
    scores.push_back(10);
    scores.push_back(10);
    scores.push_back(15);

    // cout << scores[0] << " " << scores[1] << " " << scores[2] << endl;
    int size = scores.size(), total = 0;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }
    float avg = (float)(total) / size;
    cout << fixed << setprecision(2) << "AVG : "<< avg << endl;
    
    for (int i = 0, s = scores.size(); i < s; i++)
    {
        cout << scores[i] << " ";
    } cout << endl;

    scores.pop_back();

    for (int i = 0, s = scores.size(); i < s; i++)
    {
        cout << scores[i] << " ";
    } cout << endl;

    scores.insert(scores.begin(), 90);

    for (int i = 0, s = scores.size(); i < s; i++)
    {
        cout << scores[i] << " ";
    } cout << endl;

    scores.insert(scores.begin()+2, 100);

    for (int i = 0, s = scores.size(); i < s; i++)
    {
        cout << scores[i] << " ";
    } cout << endl;

    scores.clear();
    cout << "vector : ";
    for (int i = 0, s = scores.size(); i < s; i++)
    {
        cout << scores[i] << " ";
    } cout << endl;

    return 0;
}