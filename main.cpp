#include <iostream>
#include <ctime>
using namespace std;
class GymSchedule{
  public:
  string date;
  int BodyWeight;
  int time;
  int sets ;
  int reps;
};
int main (){
GymSchedule x;
int year;
int month;
int day;
time_t now = time(0);

   cout << "Number of sec since last workout:: " << now << endl;

   tm *ltm = localtime(&now);


cout << "Year:" << year + ltm->tm_year<<endl;
cout << "Month: "<< month + ltm->tm_mon<< endl;
cout << "Day: "<< day + ltm->tm_mday << endl;

cout << "enter weight: "<< endl;
cin  >> x.BodyWeight;
cout << "how long do you spend in the gym per day? :"<<endl;
cin >> x.time;
cout << "how many sets are done in an average day"<<endl;
cin >> x.sets;
cout << "how many reps are done per set?:"<< endl;
cin>> x.reps;
}