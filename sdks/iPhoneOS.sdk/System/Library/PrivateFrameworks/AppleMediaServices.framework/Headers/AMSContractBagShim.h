//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagProtocol-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AMSContractBagShim : NSObject <AMSBagProtocol>
{
    NSObject *_bagContract;
}

+ (id)_callSelector:(SEL)arg1 onBagContract:(id)arg2;
@property(retain, nonatomic) NSObject *bagContract; // @synthesize bagContract=_bagContract;
// - (void).cxx_destruct;
- (SEL)_selectorForBagKey:(id)arg1;
- (id)_bagValueForBagKey:(id)arg1 bagValueType:(NSUInteger)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
- (BOOL)isLoaded;
@property(readonly, nonatomic, getter=isExpired) BOOL expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)initWithBagContract:(id)arg1;

@end

