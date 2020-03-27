//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCSyncOperationThrottleParams : NSObject
{
    double minWait;
    double maxWait;
    double ratioOnSuccess;
    double ratioOnFailure;
    double ratioOnQuotaErrorClear;
    double inactivityKickbackDelay;
    double inactivityKickbackRatio;
}

@property(nonatomic) double inactivityKickbackRatio; // @synthesize inactivityKickbackRatio;
@property(nonatomic) double inactivityKickbackDelay; // @synthesize inactivityKickbackDelay;
@property(nonatomic) double ratioOnQuotaErrorClear; // @synthesize ratioOnQuotaErrorClear;
@property(nonatomic) double ratioOnFailure; // @synthesize ratioOnFailure;
@property(nonatomic) double ratioOnSuccess; // @synthesize ratioOnSuccess;
@property(nonatomic) double maxWait; // @synthesize maxWait;
@property(nonatomic) double minWait; // @synthesize minWait;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)paramsToDictionary;
- (id)initWithParams:(id)arg1 defaults:(id)arg2;
- (BOOL)check;
- (void)setupWithParams:(id)arg1 defaults:(id)arg2;
- (double)doubleForKey:(id)arg1 inParams:(id)arg2 defaults:(id)arg3;

@end

