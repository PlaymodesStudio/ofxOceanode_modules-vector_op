//
//  vectorGetter.hpp
//  MIRABCN_Generator
//
//  Created by Eduard Frigola on 06/09/2017.
//
//

#ifndef vectorGetter_h
#define vectorGetter_h

#include "ofxOceanodeNodeModel.h"

class vectorGetter : public ofxOceanodeNodeModel{
public:
    vectorGetter() : ofxOceanodeNodeModel("Vector Getter"){
        parameters->add(input.set("Input", {0}, {0}, {1}));
        parameters->add(index.set("Index", "0"));
        parameters->add(output.set("Output", 0));
                
        listener = input.newListener(this, &vectorGetter::inputListener);
    };
    
    ~vectorGetter(){}
    
private:
    void inputListener(vector<float> &v){
        if(input.get().size() > ofToInt(index)){
            output = input.get()[ofToInt(index)];
        }
    }
    
    ofEventListener listener;
    
    ofParameter<vector<float>>  input;
    ofParameter<string> index;
    ofParameter<float>  output;
};

#endif /* vectorGetter_h */

