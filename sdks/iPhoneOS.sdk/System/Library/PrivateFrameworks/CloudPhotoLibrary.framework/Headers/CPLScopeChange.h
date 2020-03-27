//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>


@class CPLEngineScope, NSData, NSDate, NSDictionary;

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying>
{
    BOOL _disabled;
    long long _scopeType;
    NSDictionary *_assetCountPerType;
    NSDate *_disabledDate;
    NSDate *_deleteDate;
    NSData *_accountFlagsData;
    NSUInteger _pullTaskItem;
    CPLEngineScope *_scope;
}

+ (long long)defaultFlagsForScopeType:(long long)arg1;
+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (BOOL)shouldAutoActivateScopeWithType:(long long)arg1;
+ (Class)scopeChangeClassForType:(long long)arg1;
+ (id)descriptionForScopeType:(long long)arg1;
+ (id)mappingForScopeTypeDescription;
+ (BOOL)supportsSecureCoding;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
@property(retain, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(nonatomic) NSUInteger pullTaskItem; // @synthesize pullTaskItem=_pullTaskItem;
@property(copy, nonatomic) NSData *accountFlagsData; // @synthesize accountFlagsData=_accountFlagsData;
@property(retain, nonatomic) NSDate *deleteDate; // @synthesize deleteDate=_deleteDate;
@property(retain, nonatomic) NSDate *disabledDate; // @synthesize disabledDate=_disabledDate;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSDictionary *assetCountPerType; // @synthesize assetCountPerType=_assetCountPerType;
@property(nonatomic) long long scopeType; // @synthesize scopeType=_scopeType;
// - (void).cxx_destruct;
- (id)description;
- (id)accountFlags;
- (id)scopeIdentifier;
- (id)_scopedIdentifier;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2;
- (void)_setChangeType:(NSUInteger)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)updatedLibraryInfoFromLibraryInfo:(id)arg1 didUpdate:(BOOL )arg2;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2 libraryInfo:(id)arg3 state:(id)arg4;
- (void)_setupWithLibraryState:(id)arg1;
- (void)_setupWithLibraryInfo:(id)arg1;

@end

