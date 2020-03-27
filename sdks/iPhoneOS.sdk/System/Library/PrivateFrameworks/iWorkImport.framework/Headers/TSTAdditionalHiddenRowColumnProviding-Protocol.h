//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexSet, NSMutableIndexSet, TSTCellRegion;

@protocol TSTAdditionalHiddenRowColumnProviding <NSObject>
- (BOOL)showColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (BOOL)hideColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (BOOL)showRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (BOOL)hideRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg1;
- (unsigned char)hidingActionForRowAtIndex:(unsigned int)arg1;
- (BOOL)hasHiddenColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (BOOL)hasHiddenRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1 forAction:(unsigned char)arg2;
- (NSIndexSet *)indexesOfVisibleColumnsInColumnRange:(NSIndexSet *)arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInCellRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfUserHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInRowRange:(NSIndexSet *)arg1;
- (NSIndexSet *)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInCellRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (NSMutableIndexSet *)indexesOfCollapsedRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfFilteredRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (NSIndexSet *)indexesOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfUserHiddenColumns;
- (unsigned int)numberOfUserHiddenRows;
- (unsigned int)numberOfHiddenColumns;
- (unsigned int)numberOfHiddenRows;
- (BOOL)hasUserHiddenColumns;
- (BOOL)hasUserHiddenRows;
- (BOOL)hasHiddenColumns;
- (BOOL)hasHiddenRows;
@end

