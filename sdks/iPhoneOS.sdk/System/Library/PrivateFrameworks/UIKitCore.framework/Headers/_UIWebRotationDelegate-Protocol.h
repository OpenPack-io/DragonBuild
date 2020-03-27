//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIScrollView, UIView;

@protocol _UIWebRotationDelegate
- (BOOL)considerHeightOfRectOfInterestForRotation;
- (CGRect)activeRectForRectOfInterest:(CGRect)arg1;
- (double)heightToKeepVisible;
- (double)minimumVerticalContentOffset;
- (CGRect)rectOfInterestForRotation;
- (double)minimumScaleForSize:(CGSize)arg1;
- (void)updateBoundariesOfScrollView:(UIScrollView *)arg1 withScales:(CDStruct_39925896)arg2;
- (CDStruct_39925896)scalesForContainerSize:(CGSize)arg1;
- (double)currentDocumentScale;
- (double)zoomedDocumentScale;
- (UIView *)contentView;
- (UIScrollView *)enclosingScrollView;

@optional
- (CGSize)contentSizeForScrollView:(UIScrollView *)arg1;
- (double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
@end

