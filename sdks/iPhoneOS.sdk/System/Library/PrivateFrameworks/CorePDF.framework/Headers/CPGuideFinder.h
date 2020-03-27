//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPCluster, CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPGuideFinder : NSObject <CPDisposable>
{
    CPZone *contentZone;
    unsigned int countOfWordsInZone;
    double anchorArray;
    double rightHandSideArray;
    CDStruct_8db92b66 crossingWordArray;
    CPCluster *anchors;
    CPCluster *rightHandSides;
    double medianFontSizeOfFirstCharacter;
    double medianFontSizeOfLastCharacter;
    NSMutableArray *gutters;
    NSMutableArray *leftGuides;
    NSMutableArray *rightGuides;
}

+ (void)reclusterBetweenGuides:(id)arg1;
+ (void)reclusterPreservingAlignment:(id)arg1;
+ (BOOL)gutterSeparates:(id)arg1 from:(id)arg2;
+ (BOOL)guideSeparates:(id)arg1 from:(id)arg2;
- (id)rightGuides;
- (BOOL)hasRightGuides;
- (id)leftGuides;
- (BOOL)hasLeftGuides;
- (id)gutters;
- (BOOL)hasGutters;
- (void)markTextLines;
- (void)splitTextLines;
- (void)splitTextLinesBetweenBorderWords;
- (void)splitTextLinesAtBorderWords;
- (void)func:(id)arg1 and:(id)arg2 and:(unsigned int)arg3 and:(unsigned int)arg4;
- (void)findGuides;
- (void)findGutters;
- (void)findWordEdgeClusters;
- (void)subdivideRightGuideAt:(unsigned int)arg1;
- (void)subdivideLeftGuideAt:(unsigned int)arg1;
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(CDStruct_8db92b66 )arg4 ofCount:(unsigned int)arg5 crossedBy:(CDStruct_8db92b66 )arg6 ofCount:(unsigned int)arg7;
- (void)setAlignForWordWithExtent:(CDStruct_8db92b66 )arg1 stripArray:(id)arg2 stripMax:(double)arg3;
- (BOOL)addStripTo:(id)arg1 bottom:(double)arg2 left:(double)arg3 top:(double)arg4 right:(double)arg5;
- (void)getWordEdges;
- (double)medianFontSizeOfLastCharacter;
- (double)medianFontSizeOfFirstCharacter;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithContentZone:(id)arg1;

@end

