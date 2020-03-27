//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTCellRegionIterating-Protocol.h>
#import <iWorkImport/TSTMutableCellIteratorDataUpdating-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSTContentComposingIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>
{
    struct TSUCellCoord _minCursorCellID;
    NSMutableArray *_iterators;
    vector_38b190b0 _cursorCellIDs;
}

@property(retain, nonatomic) NSMutableArray *iterators; // @synthesize iterators=_iterators;
@property(nonatomic) vector_38b190b0 cursorCellIDs; // @synthesize cursorCellIDs=_cursorCellIDs;
@property(nonatomic) struct TSUCellCoord minCursorCellID; // @synthesize minCursorCellID=_minCursorCellID;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)terminate;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)getNext;
- (void)updateFormulaForCellData:(id)arg1;
- (void)updateCellData:(id)arg1;
- (void)addIterator:(id)arg1;
- (id)init;

@end

