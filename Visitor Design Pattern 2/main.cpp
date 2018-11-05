using namespace std;
#include <cstdlib>
#include <string>
#include <iostream>
#include"TerminalNode.h"
#include"NonTerminalNode.h"
#include "Builder.h"
#include "ExpBuilder.h"
#include "ExpParser.h"
#include "StackBasedCalVisitor.h"

int main(int argc, char** argv) {
    ExpBuilder builder;
    ExpParser parser;
    parser.setBuilder(&builder);
    string input="(((30+500)*70)-(60/50))";
    parser.parse(input);
    Node* root = builder.getExpression();
    cout<<input<<endl;
    root->print();
    StackBasedCalVisitor sbsv;
    root->Accept(&sbsv);
    cout<<endl<<"StackBasedSumVisitor Result: "<<sbsv.getResult()<<endl;
    return 0;
}