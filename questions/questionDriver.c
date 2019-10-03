//
//  questionDriver.c
//  Projects
//
//  Created by John Mortensen on 9/21/19.
//  Copyright © 2019 Mortensen, John. All rights reserved.
//

#include "questions.h"
struct mainSection{
    int score, questions;
    int sectionScore[5];
    int sectionQuestions[5];
    
} s;
struct mathSection{
   char *sectionName;
    int sNum;       // section number
   int randCtrl;
    
} m;
int questionDriver(char *message) {
    s.score = 0;
    s.questions = 0;
    s.sectionQuestions[5]={0,0,0,0,0};
    srand((uint)time(0));
    
    { // Math
        *m.sectionName = "Math";
        m.sNum = 0;       // section number
        m.randCtrl = 5 + 1;
        
        s.sectionQuestions[m.sNum] = rand() % m.randCtrl;  s.questions += s.sectionQuestions[sNum];
        s.sectionScore[sNum] = mathQuestions(s.sectionQuestions[m.sNum]); s.score += s.sectionScore[sNum];
        printf("Your %s score is %d out of %d\n\n", m.sectionName, s.sectionScore[sNum], sectionQuestions[sNum] );
    }
    
    { // Binary Math
        char *sectionName = "Binary";
        int sNum = 1;       // section number
        int randCtrl = 0 + 1;
        
        sectionQuestions[sNum] = rand() % randCtrl;  questions += sectionQuestions[sNum];
        // sectionScore[sNum] = binaryQuestions(sectionQuestions[sNum]); score += sectionScore[sNum];
        printf("Your %s score is %d out of %d\n\n", sectionName, sectionScore[sNum], sectionQuestions[sNum] );
    }
    
    { // Assignment operators
        char *sectionName = "Assignment";
        int sNum = 1;       // section number
        int randCtrl = 0 + 1;
        
        sectionQuestions[sNum] = rand() % randCtrl;  questions += sectionQuestions[sNum];
        // sectionScore[sNum] = assignmentQuestions(sectionQuestions[sNum]); score += sectionScore[sNum];
        printf("Your %s score is %d out of %d\n\n", sectionName, sectionScore[sNum], sectionQuestions[sNum] );
    }
    
    { // Expressions
        char *sectionName = "Expressions";
        int sNum = 2;       // section number
        int randCtrl = 0 + 1;
        
        sectionQuestions[sNum] = rand() % randCtrl;  questions += sectionQuestions[sNum];
        // sectionScore[sNum] = expressionQuestions(sectionQuestions[sNum]); score += sectionScore[sNum];
        printf("Your %s score is %d out of %d\n\n", sectionName, sectionScore[sNum], sectionQuestions[sNum] );
    }
    
    { // Logic and Negation
        char *sectionName = "Logic";
        int sNum = 3;       // section number
        int randCtrl = 5 + 1;
        
        sectionQuestions[sNum] = rand() % randCtrl;  questions += sectionQuestions[sNum];
        sectionScore[sNum] = logicQuestions(sectionQuestions[sNum]); score += sectionScore[sNum];
        printf("Your %s score is %d out of %d\n\n", sectionName, sectionScore[sNum], sectionQuestions[sNum] );
    }
    
    { // Data Type Conversion
        char *sectionName = "Conversion";
        int sNum = 4;       // section number
        int randCtrl = 0 + 1;
        
        sectionQuestions[sNum] = rand() % randCtrl;  questions += sectionQuestions[sNum];
        // sectionScore[sNum] = conversionQuestions(sectionQuestions[sNum]); score += sectionScore[sNum];
        printf("Your %s score is %d out of %d\n\n", sectionName, sectionScore[sNum], sectionQuestions[sNum] );
    }
    
    // Final Score of test
    sprintf(message, "%d out of %d", score, questions);
    printf("Your score is %s\n", message);
    
    return questions;
    
}
