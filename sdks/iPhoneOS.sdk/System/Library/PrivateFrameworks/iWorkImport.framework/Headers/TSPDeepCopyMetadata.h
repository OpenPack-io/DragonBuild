//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSDictionary, TSPComponentObjectUUIDMap;

__attribute__((visibility("hidden")))
@interface TSPDeepCopyMetadata : TSPObject
{
    long long _rootObjectIdentifier;
    NSUInteger _version;
    TSPComponentObjectUUIDMap *_componentObjectUUIDMap;
    NSDictionary *_cachedDataMap;
}

@property(readonly, nonatomic) NSDictionary *cachedDataMap; // @synthesize cachedDataMap=_cachedDataMap;
@property(readonly, nonatomic) TSPComponentObjectUUIDMap *componentObjectUUIDMap; // @synthesize componentObjectUUIDMap=_componentObjectUUIDMap;
@property(readonly, nonatomic) NSUInteger version; // @synthesize version=_version;
@property(readonly, nonatomic) long long rootObjectIdentifier; // @synthesize rootObjectIdentifier=_rootObjectIdentifier;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithRootObject:(id)arg1 version:(NSUInteger)arg2 componentObjectUUIDMap:(id)arg3 cachedDataMap:(id)arg4;
- (id)initWithContext:(id)arg1;

@end

