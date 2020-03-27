//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKArrowAnnotation.h>

#import <AnnotationKit/AKFilledAnnotationProtocol-Protocol.h>

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol>
{
    double _arrowLineWidth;
    double _arrowHeadWidth;
    double _arrowHeadLength;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property double arrowHeadLength; // @synthesize arrowHeadLength=_arrowHeadLength;
@property double arrowHeadWidth; // @synthesize arrowHeadWidth=_arrowHeadWidth;
@property double arrowLineWidth; // @synthesize arrowLineWidth=_arrowLineWidth;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (CGRect)hitTestBounds;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;
- (id)init;

@end

