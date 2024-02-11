# About Me
**Name:** Muhamad Firdaus Bin Mohd Razali  
**Github username:** ausrazali  
  
**How many pull requests have you done here:** 1  

**LinekdIn profile url:** [Connect with me](https://www.linkedin.com/in/muhamadfirdausmohdrazali/)  
**Twitter profile url:** N/A  
  
**Country:** Malaysia  

**Bio:** Pursuing a Bachelor of Information Technology (Hons) majoring in Software Engineering. Baby steps learning everything I need to know to land a software engineer job as soon as I graduate. Pray the best for me! Love to contribute to open source project, and start my OSP too. Soon.I highly value guidance and believe in continuous learning and professional growth, and I am eager to collaborate and explore new opportunities with like-minded professionals.
- Follow me [GitHub](https://github.com/ausrazali)
<hr>

# About Program
**Program:** GPA Calculator  
**Filename:** GPAcalculator.cpp

This C++ program calculates the Grade Point Average (GPA) based on the user's input of grades and corresponding credit hours for ten subjects. It uses a standard grading scale to assign grade points to letter grades and calculates the weighted GPA. The grading scale is based on Malaysia's MARA Junior Science College *(malay: Maktab Rendah Sains MARA)* grading scale for upper-form (Form 4 & Form 5).

Program Components:
- **arrSubject:** An array that stores the names of the ten subjects.
- **arrCredHrs:** An array that stores the credit hours for each subject respectively.
- **userGrade:** An array to store the user's input for letter grades.
- **userPointer:** An array to store the calculated grade points based on the user's input.

- **Grading Scale:** The program uses a standard grading scale to assign grade points to letter grades. The grading scale includes grades from "A+" to "F" and assigns the corresponding grade points.

- **User Input:** The user is prompted to input their grades for each subject, following the grading scale. The program then calculates the corresponding grade points for each grade input.

- **GPA Calculation:** The program calculates the GPA by multiplying each subject's grade points by its credit hours, summing these values, and dividing by the total credit hours (41 in this case). The result is formatted with two decimal places using setprecision from the <iomanip> library.

- **Output:** The program displays the calculated GPA as the final output.