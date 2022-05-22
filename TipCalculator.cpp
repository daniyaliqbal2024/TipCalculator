#include <iostream>
#include <string>
using namespace std;
#include <math.h>

double computeTip(double price, double percentage, bool roundUp)
{
	double x= price * percentage;
	if (roundUp==true)
	{
		x= ceil(x);
	}
	return x;

}

int runCommandLine(int argc, const char *argv[])
{
    bool roundUp = false;
    double price    = 0;
    double percent  = 0;

    // Fill the values above (roundup, price, and percent) from the command-line parameters (argv)
    // so the rest of this call prints the results of your computeTip function.
    /****************************/

    // Your code here
    price= stod(argv[2]);
    percent= stod (argv[4])/100;

    string roundUpStr("roundup");
    string roundUpStr_;


    if (argc< 6)
    {
    	roundUpStr_= "";

    }
    else
    {
    	roundUpStr_= argv[5];
    }
    if (roundUpStr== roundUpStr_)
    {
    	roundUp= true;
    }

    /****************************/
    // Do not modify anything below here....

    double tip = computeTip(price, percent, roundUp);
    double total = price + tip;

    char buf[1024];
    sprintf(buf,
    		"For $%.2f at a tip of %.1f%%%s\nTip: $%.2f\nTotal: $%.2f",
    		                      price, percent*100, (roundUp? " rounded up": ""), tip, total);
    cout << string(buf) << endl;
    return 0;
}
