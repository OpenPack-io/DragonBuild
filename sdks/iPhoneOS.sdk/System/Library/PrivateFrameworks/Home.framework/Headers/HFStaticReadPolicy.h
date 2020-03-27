//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>

@class NSString;

@interface HFStaticReadPolicy : NSObject <HFCharacteristicReadPolicy>
{
    NSUInteger _decision;
}

+ (id)policyWithDecision:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger decision; // @synthesize decision=_decision;
- (NSUInteger)evaluateWithCharacteristic:(id)arg1 traits:(out id )arg2;
@property(readonly, copy) NSString *description;
- (id)initWithDecision:(NSUInteger)arg1;
- (id)init;

@end

