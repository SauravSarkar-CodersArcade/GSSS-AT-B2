#include <iostream>
using namespace std;
class Printer {
public:
    string _name;
    int _availablePaper;
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    }
    void PrintDoc(string textDoc){
        // 40 / 10 = 4 pages
        int requiredPaper = textDoc.length() / 10;
        if (requiredPaper > _availablePaper){
            //throw 404;
            throw "Out of paper! Please Add Paper Before Printing.";
        }
        cout << "Printing....!!!! " << textDoc << endl;
        _availablePaper -= requiredPaper;
    }
};
int main() {
    Printer myPrinter("Canon DeskJet 4050", 10);
    try {
        myPrinter.PrintDoc
                ("Sinchana is a Software Developer.");
        myPrinter.PrintDoc
                ("Rishitha is a Software Developer.");
        myPrinter.PrintDoc
                ("Kavya is a Software Developer.");
        myPrinter.PrintDoc
                ("Srashti is a Software Developer.");
    }catch (int errorCode){
        cout << errorCode
        << ": Out of paper! Please Add Paper Before Printing."
        << endl;
    }catch (const char * txtException){
        cout << "Exception: " << txtException << endl;
    }
    catch (...){
        cout << "Something Unexpected Happened..!!" << endl;
    }
    cout << myPrinter._availablePaper << endl;
    return 0;
}
