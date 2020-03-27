//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, _IntArray2D;
@protocol _EditScriptData;

__attribute__((visibility("hidden")))
@interface _EditScript : NSObject
{
    BOOL _orderAtomsAscending;
    _IntArray2D *_distanceMatrix;
    long long _currentOperation;
    id <_EditScriptData> _itemAData;
    id <_EditScriptData> _itemBData;
    NSArray *_operationPrecedenceArray;
    NSMutableArray *_script;
}

@property(retain, nonatomic) NSMutableArray *script; // @synthesize script=_script;
@property(copy, nonatomic) NSArray *operationPrecedenceArray; // @synthesize operationPrecedenceArray=_operationPrecedenceArray;
- (void)finalizeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(NSUInteger)arg2 newText:(id)arg3 indexInArrayB:(NSUInteger)arg4;
- (void)initializeCurrentScriptAtom;
- (void)computeEditsFromMatrix;
- (void)computeDistanceMatrix;
- (id)description;
- (id)initWithOperationPrecedence:(long long)arg1 orderAtomsAscending:(BOOL)arg2;
- (id)operationPrecedenceArrayFromOperationPrecedence:(long long)arg1;
- (void)dealloc;

@end

