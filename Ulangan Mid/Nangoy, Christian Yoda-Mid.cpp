#include<iostream>
#include<string>

using namespace std;

struct Student
{
string name;
string finalLetterGrade;
};

class StudentRecord
{
private:
    Student someStudent[100];

    double quiz, midterm, finalExam, attendance, assignment;
    double finalGrade;
    string finalLetterGrade;

public:
    void inputQuizzes();
    void inputMidtermGrade();
    void inputFinalGrade();
    void inputAttendance();
    void inputAssignment();

    double getQuizzes();
    double getMidterm();
    double getFinalExam();
    double getAttendance();
    double getAssignment();

    double calcPercent(double grade, double outOfTotalPts, double percentOfTotal);

double setFinalNumericGrade(double newFinalGrade);
string setFinalLetterGrade(string newFinalLetterGrade);
string calcFinalLetterGrade(double finalGrade);
};

double StudentRecord::getQuizzes(){ return quiz; }
double StudentRecord::getMidterm() { return midterm; }
double StudentRecord::getFinalExam() { return finalExam; }
double StudentRecord::getAssignment() { return assignment; }
double StudentRecord::getAttendance() { return attendance; }
double StudentRecord::calcPercent(double grade, double outOfTotalPts, double percentOfTotal)
{
    double totalPercent = (grade * outOfTotalPts) / percentOfTotal;
    return totalPercent;
}

double StudentRecord::setFinalNumericGrade(double newFinalGrade) {
  return finalGrade = newFinalGrade;
}

string StudentRecord::calcFinalLetterGrade(double finalGrade)
{
  string grade;
  if (finalGrade > 90){
    grade = "A";
    return grade;
  } else if (finalGrade >= 85 && finalGrade <= 90){
    grade = "A-";
    return grade;
  } else if (finalGrade >= 82 && finalGrade < 85){
    grade = "B+";
    return grade;
  } else if (finalGrade >= 78 && finalGrade < 82){
    grade = "B";
    return grade;
  } else if (finalGrade >= 75 && finalGrade < 78){
    grade = "B-";
    return grade;
  } else if (finalGrade > 69 && finalGrade < 75){
    grade = "C+";
    return grade;
  } else if (finalGrade > 66 && finalGrade < 70){
    grade = "C";
    return grade;
  } else if (finalGrade > 59 && finalGrade < 67){
    grade = "C-";
    return grade;
  } else if (finalGrade > 39 && finalGrade < 60){
    grade = "D";
    return grade;
  } else {
    grade = "F";
    return grade;
  }

}


string StudentRecord::setFinalLetterGrade(string newFinalLetterGrade) {
   return finalLetterGrade = newFinalLetterGrade;
}

// user inputs grades //
void StudentRecord::inputAttendance()
{
    cout << "Attendance\t:";
    cin >> attendance;
}

void StudentRecord::inputQuizzes()
{
    cout << "Quiz\t\t:";
    cin >> quiz;
}

void StudentRecord::inputAssignment()
{
    cout << "Assignment\t:";
    cin >> assignment;
}

void StudentRecord::inputMidtermGrade()
{
    cout << "Mid Exam\t:";
    cin >> midterm;
}

void StudentRecord::inputFinalGrade()
{
    cout << "Final Exam\t:";
    cin >> finalExam;
}

int main()
{
    Student someStudent[100];
    int studentNumbers;
    StudentRecord student[100];

    cout << "input student: ";
    cin>>studentNumbers;
    for (int i = 0; i < studentNumbers; i++) {
      cout << "Enter name : ";
      cin >> someStudent[i].name;
      
	  student[i].inputAttendance();
      student[i].inputQuizzes();
      student[i].inputAssignment();
      student[i].inputMidtermGrade();
      student[i].inputFinalGrade();
      
    }

    for (int i = 0; i < studentNumbers; i++) {
      double quizPercent = student[i].calcPercent(student[i].getQuizzes(), 10, 100);
      double midtermPercent = student[i].calcPercent(student[i].getMidterm(), 30,100);
      double finalPercent = student[i].calcPercent(student[i].getFinalExam(), 30,100);
      double attendancePercent = student[i].calcPercent(student[i].getAttendance(), 10,100);
      double assignmentPercent = student[i].calcPercent(student[i].getAssignment(), 20,100);

      double finalNumGrade = quizPercent + midtermPercent + finalPercent + attendancePercent + assignmentPercent;

      student[i].setFinalNumericGrade(finalNumGrade);

      string letterGrade = student[i].calcFinalLetterGrade(finalNumGrade);

      student[i].setFinalLetterGrade(letterGrade);

      someStudent[i].finalLetterGrade = letterGrade;
      fflush(stdin);
      cout << "----------------------------" << endl;
      cout << " Student     ||     Grade" << endl;
      cout << "----------------------------" << endl ;
      cout << i+1<<". "<<"Name : " << someStudent[i].name<<"   "<<finalNumGrade <<" ("<< someStudent[i].finalLetterGrade <<")"<< endl;
      cout << "----------------------------" << endl ;
    }
    cout<<endl;
    return 0;
}