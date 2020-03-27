//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CPLResource, NSData, NSString;

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_adjustmentType;
    NSString *_adjustmentCompoundVersion;
    NSString *_adjustmentCreatorCode;
    NSUInteger _adjustmentSourceType;
    NSData *_simpleAdjustmentData;
    NSString *_similarToOriginalAdjustmentsFingerprint;
    NSString *_otherAdjustmentsFingerprint;
    NSUInteger _adjustmentRenderTypes;
    CPLResource *_adjustmentData;
    NSString *_creatorCode;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *creatorCode; // @synthesize creatorCode=_creatorCode;
@property(retain, nonatomic) CPLResource *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(nonatomic) NSUInteger adjustmentRenderTypes; // @synthesize adjustmentRenderTypes=_adjustmentRenderTypes;
@property(copy, nonatomic) NSString *otherAdjustmentsFingerprint; // @synthesize otherAdjustmentsFingerprint=_otherAdjustmentsFingerprint;
@property(copy, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint; // @synthesize similarToOriginalAdjustmentsFingerprint=_similarToOriginalAdjustmentsFingerprint;
@property(retain, nonatomic) NSData *simpleAdjustmentData; // @synthesize simpleAdjustmentData=_simpleAdjustmentData;
@property(nonatomic) NSUInteger adjustmentSourceType; // @synthesize adjustmentSourceType=_adjustmentSourceType;
@property(copy, nonatomic) NSString *adjustmentCreatorCode; // @synthesize adjustmentCreatorCode=_adjustmentCreatorCode;
@property(copy, nonatomic) NSString *adjustmentCompoundVersion; // @synthesize adjustmentCompoundVersion=_adjustmentCompoundVersion;
@property(copy, nonatomic) NSString *adjustmentType; // @synthesize adjustmentType=_adjustmentType;
// - (void).cxx_destruct;
- (id)adjustmentSimpleDescription;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

