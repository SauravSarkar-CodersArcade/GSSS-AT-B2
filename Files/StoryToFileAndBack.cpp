#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void writeStoryToFile(const string& story, const string& filename){
    ofstream outFile(filename);
    if (!outFile){
        cerr << "Error opening the file for writing..!!" << endl;
        return;
    }
    for (char ch : story){
        outFile << int(ch) << ' ';
    }
    outFile.close();
}
string readStoryFromFile(const string& filename){
    ifstream inFile(filename);
    if (!inFile){
        cerr << "Error opening the file for writing..!!" << endl;
        return "";
    }
    string story;
    int asciiCode;
    while (inFile >> asciiCode){
        story += char(asciiCode);
    }
    inFile.close();
    return story;
}
int main() {
    string story = "GSSSIETW is in Mysore.\n";
    string filename = "C:\\Users\\Saurav\\CLionProjects\\GSSS-CPP\\Files\\story.txt";
    writeStoryToFile(story, filename);
    string retrievedStory = readStoryFromFile(filename);
    cout << "Retrieved Story: " << retrievedStory << endl;
    return 0;
}
