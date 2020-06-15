//
//  vector_op_registrator.h
//  artnetOceanodeModule
//
//  Created by Eduard Frigola Bagué on 30/04/2018.
//

#ifndef vector_op_registrator_h
#define vector_op_registrator_h

#include "subDimensionCombinator.h"
#include "vectorChain.h"
#include "vectorGetter.h"
#include "vectorOperations.h"
#include "vectorItemOperations.h"
#include "ofxOceanode.h"

static void registerVectorOp(ofxOceanode &o){
    o.registerModel<subDimensionCombinator>("Vector Operations");
    o.registerModel<vectorChain>("Vector Operations");
    o.registerModel<vectorGetter>("Vector Operations");
    o.registerModel<vectorOperations>("Vector Operations");
    o.registerModel<vectorItemOperations>("Vector Operations");
}

#endif /* vector_op_registrator_h */
