//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>


@class HMFVersion, NSString;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying>
{
    BOOL _encrypted;
    BOOL _excludeFromCloudStorage;
    BOOL _optional;
    BOOL _conformsToHMBModelNativeCKWrapper;
    Class _classObj;
    NSString *_externalRecordField;
    NSUInteger _loggingVisibility;
    id _defaultValue;
    HMFVersion *_readonlyVersion;
    HMFVersion *_unavailableVersion;
    id /* CDUnknownBlockType */ _encodeBlock;
    id /* CDUnknownBlockType */ _decodeBlock;
    id /* CDUnknownBlockType */ _descriptionBlock;
}

+ (id)deprecatedField;
+ (id)optionalFieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)fieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)optionalFieldWithClass:(Class)arg1;
+ (id)fieldWithClass:(Class)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ descriptionBlock; // @synthesize descriptionBlock=_descriptionBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ decodeBlock; // @synthesize decodeBlock=_decodeBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ encodeBlock; // @synthesize encodeBlock=_encodeBlock;
@property(nonatomic) BOOL conformsToHMBModelNativeCKWrapper; // @synthesize conformsToHMBModelNativeCKWrapper=_conformsToHMBModelNativeCKWrapper;
@property(copy, nonatomic) HMFVersion *unavailableVersion; // @synthesize unavailableVersion=_unavailableVersion;
@property(copy, nonatomic) HMFVersion *readonlyVersion; // @synthesize readonlyVersion=_readonlyVersion;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) NSUInteger loggingVisibility; // @synthesize loggingVisibility=_loggingVisibility;
@property(nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property(nonatomic) BOOL excludeFromCloudStorage; // @synthesize excludeFromCloudStorage=_excludeFromCloudStorage;
@property(retain, nonatomic) NSString *externalRecordField; // @synthesize externalRecordField=_externalRecordField;
@property(nonatomic) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) Class classObj; // @synthesize classObj=_classObj;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)descriptionForEncodedQueryableValue:(id)arg1;
- (id)decodeQueryableValue:(id)arg1;
- (id)encodeQueryableValue:(id)arg1;
- (id)description;
- (id)initWithClass:(Class)arg1 options:(id)arg2;
- (id)initWithClass:(Class)arg1;

@end

