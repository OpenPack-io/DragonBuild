//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class DNDSModeAssertionInvalidationDetailsRecord, DNDSModeAssertionRecord, DNDSModeAssertionSourceRecord, NSNumber, NSString;

@interface DNDSModeAssertionInvalidationRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    DNDSModeAssertionRecord *_assertion;
    NSNumber *_invalidationDate;
    DNDSModeAssertionInvalidationDetailsRecord *_details;
    DNDSModeAssertionSourceRecord *_source;
    NSString *_reason;
    NSString *_reasonOverride;
}

+ (id)recordForInvalidation:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 )arg2;
@property(retain, nonatomic) NSString *reasonOverride; // @synthesize reasonOverride=_reasonOverride;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) DNDSModeAssertionSourceRecord *source; // @synthesize source=_source;
@property(retain, nonatomic) DNDSModeAssertionInvalidationDetailsRecord *details; // @synthesize details=_details;
@property(retain, nonatomic) NSNumber *invalidationDate; // @synthesize invalidationDate=_invalidationDate;
@property(retain, nonatomic) DNDSModeAssertionRecord *assertion; // @synthesize assertion=_assertion;
// - (void).cxx_destruct;
- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 )arg1 options:(NSUInteger)arg2;

@end

