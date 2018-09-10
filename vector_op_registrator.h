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
#include "ofxOceanodeNodeRegistry.h"

static void registerVectorOp(shared_ptr<ofxOceanodeNodeRegistry> registry){
    registry->registerModel<subDimensionCombinator>("Vector Operations");
    registry->registerModel<vectorChain>("Vector Operations");
    registry->registerModel<vectorGetter>("Vector Operations");
    registry->registerModel<vectorOperations>("Vector Operations");
    registry->registerModel<vectorItemOperations>("Vector Operations");
}

#endif /* vector_op_registrator_h */
