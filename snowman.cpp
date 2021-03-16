#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

#include "snowman.hpp"

namespace ariel {
	string snowman(int s)
    {
        const int MIN_NUM = 11111111;
        const int MAX_NUM = 44444444;
        if (s < MIN_NUM)
        {
            throw string("less then 11111111");
        }
        if (s > MAX_NUM)
        {
            throw string ("bigger then 44444444");
        }
        
        
        //HNLRXYTB
        const int B = s % 10;
        const int T = s / 10 % 10;
        const int Y = s / 10 / 10 % 10;
        const int X = s / 10 / 10 / 10 % 10;
        const int R = s / 10 / 10 / 10 / 10 % 10;
        const int L = s / 10 / 10 / 10 / 10 / 10 % 10;
        const int N = s / 10 / 10 / 10 / 10 / 10 / 10 % 10;
        const int H = s / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
        //cout<<B<<T<<Y<<X<<R<<L<<N<<H;
        
        string sm;
        sm = "";
        string hat;
        string leftArm; 
        string rightArm;
        string leftEye;
        string rightEye;
        string nose;
        string pupik;
        string legs;
        
        switch (H)
        {
        case 1:
            hat= " _===_ ";
            break;
        case 2:
            hat= "  ___  \n ..... ";
            break;
        case 3:
            hat= "   _   \n  /_\\  ";
            break;
        case 4:
            hat= "  ___  \n (_*_) ";
            break;
        default:
            throw string( "input is not currect 1");
            break;
        }

        switch (X)
        {
        case 1:
            leftArm = "<";
            break;
        case 2:
            leftArm = "\\";
            break;
        case 3:
            leftArm = "/";
            break;
        case 4:
            leftArm = " ";
            break;
        default:
            throw string( "input is not currect 2");
            break;
        }

        switch (L)
        {
        case 1:
            leftEye= ".";
            break;
        case 2:
            leftEye= "o";
            break;
        case 3:
            leftEye= "O";
            break;
        case 4:
            leftEye= "-";
            break;
        default:
            throw string( "input is not currect 3");
            break;
        }

        switch (N)
        {
        case 1:
            nose= ",";
            break;
        case 2:
            nose= ".";
            break;
        case 3:
            nose= "_";
            break;
        case 4:
            nose= " ";
            break;
        default:
            throw string( "input is not currect 4");
            break;
        }

        switch (R)
        {
        case 1:
            rightEye= ".";
            break;
        case 2:
            rightEye= "o";
            break;
        case 3:
            rightEye= "O";
            break;
        case 4:
            rightEye= "-";
            break;
        default:
            throw string( "input is not currect 5");
            break;
        }

        switch (Y)
        {
        case 1:
            rightArm = ">";
            break;
        case 2:
            rightArm = "/";
            break;
        case 3:
            rightArm = "\\";
            break;
        case 4:
            rightArm = " ";
            break;
        default:
            throw string( "input is not currect 6");
            break;
        }

        switch (T)
        {
        case 1:
            pupik= " : ";
            break;
        case 2:
            pupik= "] [";
            break;
        case 3:
            pupik= "> <";
            break;
        case 4:
            pupik= "   ";
            break;
        default:
            throw string( "input is not currect 7");
            break;
        }

        switch (B)
        {
        case 1:
            legs= " : ";
            break;
        case 2:
            legs= "\" \"";
            break;
        case 3:
            legs= "___";
            break;
        case 4:
            legs= "   ";
            break;
        default:
            throw string( "input is not currect 8");
            break;
        }
        
        sm += hat + "\n";
        if (X == 2 || X == 4)
        {
            sm += leftArm;
        }
        else{
            sm += " ";
        }
        
        sm += "(" + leftEye + nose + rightEye + ")";
        if (Y == 2 || Y == 4)
        {
            sm += rightArm;
        }
        else{
            sm += " ";
        }
        
        sm += "\n";

        if (X == 1 || X == 3 || X == 4)
        {
            sm += leftArm;
        }
        else{
            sm += " ";
        }
        sm += "(" + pupik + ")";
        if (Y == 1 || Y == 3 || Y == 4)
        {
            sm += rightArm;
        }
        else{
            sm += " ";
        }
        sm += "\n (" + legs + ") ";
        
        cout<<sm<<endl;
        return sm;
    }
}

