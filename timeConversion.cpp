#include "excercises.h"

string timeConversion(string formatoAP){
    string mmss = formatoAP.substr(2,6);
    int hrs = stoi(formatoAP.substr(0,2));

    if (hrs == 12){
        if (formatoAP[8] == 'A')
            hrs = 00; 
    } else if (formatoAP[8] == 'P'){
        hrs += 12;
    }

    return hrs<10 ? "0"+to_string(hrs)+mmss : to_string(hrs)+mmss;

}

string timeConversionOptimized(string formatoAP){
    string mmss = formatoAP.substr(2,6);
    int hrs = stoi(formatoAP.substr(0,2));
    int factor = ((hrs%12)/hrs);

    if (formatoAP[8] == 'A')
        factor--;
    
    hrs += (12 * factor);

    return hrs<10 ? "0"+to_string(hrs)+mmss : to_string(hrs)+mmss;
}
