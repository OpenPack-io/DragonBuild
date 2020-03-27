//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface ADAdSpaceEventInfo : NSObject <NSSecureCoding>
{
    NSUInteger _screenfuls;
    NSUInteger _slotPosition;
    NSUInteger _reuseCount;
    long long _lastErrorCode;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long lastErrorCode; // @synthesize lastErrorCode=_lastErrorCode;
@property(nonatomic) NSUInteger reuseCount; // @synthesize reuseCount=_reuseCount;
@property(nonatomic) NSUInteger slotPosition; // @synthesize slotPosition=_slotPosition;
@property(nonatomic) NSUInteger screenfuls; // @synthesize screenfuls=_screenfuls;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientInfo:(id)arg1 reuseCount:(NSUInteger)arg2;

@end

