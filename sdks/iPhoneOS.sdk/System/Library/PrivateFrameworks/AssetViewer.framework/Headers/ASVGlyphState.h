//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol ASVGlyphStateDelegate;

@interface ASVGlyphState : NSObject
{
    CDStruct_0e8a9a91 _quaternionTarget;
    MISSING_TYPE *_scaleTarget;
    MISSING_TYPE *_translationTarget;
    NSUInteger _snapState;
    id <ASVGlyphStateDelegate> _delegate;
}

@property(nonatomic) __weak id <ASVGlyphStateDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (MISSING_TYPE *)computeTranslationTarget;
- (MISSING_TYPE *)computeScaleTarget;
- (CDStruct_183601bc)computeQuaternionTarget;
@property(readonly, nonatomic) MISSING_TYPE *translationTarget;
@property(readonly, nonatomic) MISSING_TYPE *scaleTarget;
@property(readonly, nonatomic) CDStruct_183601bc quaternionTarget;
@property(nonatomic) NSUInteger snapState;
- (id)init;

@end

