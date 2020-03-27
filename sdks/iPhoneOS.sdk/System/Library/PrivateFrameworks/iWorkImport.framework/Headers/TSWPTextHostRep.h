//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import <iWorkImport/TSDContainerRep-Protocol.h>

@class NSArray, NSObject, TSWPShapeRep;
@protocol TSDContainerInfo, TSKSearchReference;

__attribute__((visibility("hidden")))
@interface TSWPTextHostRep : TSDRep <TSDContainerRep>
{
    TSWPShapeRep *_editingRep;
    BOOL _useFindOverlayers;
    NSObject<TSKSearchReference> *_primaryFindResultSearchReference;
    NSArray *_searchReferences;
}

@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property(readonly, nonatomic) BOOL useFindOverlayers; // @synthesize useFindOverlayers=_useFindOverlayers;
@property(retain, nonatomic) NSObject<TSKSearchReference> *primaryFindResultSearchReference; // @synthesize primaryFindResultSearchReference=_primaryFindResultSearchReference;
// - (void).cxx_destruct;
- (void)drawTextBackground:(CGContext )arg1 insetRect:(CGRect)arg2 pulsating:(BOOL)arg3;
- (void)drawTextBackground:(CGContext )arg1 insetRect:(CGRect)arg2 pulsating:(BOOL)arg3 shouldTint:(BOOL)arg4;
- (void)setPulseControllerActive:(BOOL)arg1 autohide:(BOOL)arg2;
- (void)selectChildRep:(id)arg1 extendingSelection:(BOOL)arg2;
- (BOOL)canSelectChildRep:(id)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
@property(readonly, nonatomic) NSArray *childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)updateChildrenFromLayout;
- (void)willBeRemoved;
- (void)dealloc;
- (void)finishInit;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

