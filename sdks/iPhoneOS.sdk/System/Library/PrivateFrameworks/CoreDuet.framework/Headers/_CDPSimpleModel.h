//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPModel-Protocol.h>

@class NSArray, NSIndexSet;
@protocol _CDPDataHarvester;

@interface _CDPSimpleModel : NSObject <_CDPModel>
{
    BOOL _loaded;
    BOOL _scoresAreDirty;
    NSUInteger _NEmail;
    NSUInteger _size;
    NSUInteger _NPeople;
    double _timestamp;
    BOOL _userIsSender;
    BOOL _userIsThreadInitiator;
    unsigned int _email;
    NSUInteger _emailLength;
    float _email2LogScore;
    unsigned int _people2Email;
    NSUInteger _people2EmailLength;
    NSArray *_people;
    NSIndexSet *_testingIndices;
    BOOL _requireOutgoingInteraction;
    float _lambda;
    float _w0;
    id <_CDPDataHarvester> _harvester;
}

+ (int)maxNumberOfEmailsSupported;
@property(nonatomic) BOOL requireOutgoingInteraction; // @synthesize requireOutgoingInteraction=_requireOutgoingInteraction;
@property(readonly, nonatomic) float w0; // @synthesize w0=_w0;
@property(readonly, nonatomic) float lambda; // @synthesize lambda=_lambda;
@property(retain, nonatomic) id <_CDPDataHarvester> harvester; // @synthesize harvester=_harvester;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *people;
- (id)peopleWithID:(unsigned int)arg1;
- (void)_printPrediction:(struct _cdp_prediction_result )arg1;
- (void)_printUserWithID:(NSUInteger)arg1;
- (void)_printUsers:(unsigned int )arg1 length:(NSUInteger)arg2;
- (void)_printEmailWithID:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger nEmail;
@property(readonly, nonatomic) NSUInteger nPeople;
- (void)getEmail:(unsigned int )arg1 emailLength:(NSUInteger )arg2 atIndex:(NSUInteger)arg3;
- (id)_testingIndices;
- (void)makePredictionForGroup:(id)arg1 clientType:(long long)arg2 limit:(long long)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (struct _cdp_prediction_result )_newPredictionResultWithSeed:(unsigned int )arg1 seedLength:(NSUInteger)arg2 realSeedLength:(NSUInteger)arg3 maxTrainingEmailID:(unsigned int)arg4;
- (void)setLambda:(float)arg1 w0:(float)arg2;
- (unsigned int )_newIdsForPeople:(id)arg1 length:(NSUInteger )arg2;
- (void)loadModel:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (void)_reallocModel;

@end

