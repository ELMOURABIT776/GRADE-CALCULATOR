#include <iostream>
using namespace std;

int main() {

    double homeworkScore, midtermScore, finalExamScore;
    double finalGrade;


    cout << "Enter the homework score (0-100): ";
    cin >> homeworkScore;
    cout << "Enter the midterm score (0-100): ";
    cin >> midtermScore;
    cout << "Enter the final exam score (0-100): ";
    cin >> finalExamScore;


    finalGrade = (homeworkScore * 0.40) + (midtermScore * 0.30) + (finalExamScore * 0.30);


    cout << "The final grade is: " << finalGrade << "%" << endl;


    if (finalGrade >= 60) {
        cout << "Congratulations! You passed the course." << endl;
    } else {
        cout << "Sorry, you did not pass the course." << endl;
    }

    return 0;
}


