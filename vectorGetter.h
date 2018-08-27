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
        parameters->add(index.set("Index", 0, 0, 1));
        parameters->add(output.set("Output", 0));
        
        lastSize = 1;
                
        listener = input.newListener(this, &vectorGetter::inputListener);
    };
    
    ~vectorGetter(){}
    
private:
    void inputListener(vector<float> &v){
        if(v.size() != lastSize){
            if(index >= v.size()) index = v.size()-1;
            index.setMax(v.size() - 1);
            string indexName = "Index";
            parameterChangedMinMax.notify(this, indexName);
            lastSize = v.size();
        }
        if(v.size() > index){
            output = v[index];
        }
    }
    
    ofEventListener listener;
    
    ofParameter<vector<float>>  input;
    ofParameter<int> index;
    ofParameter<float>  output;
    int lastSize;
};

#endif /* vectorGetter_h */

