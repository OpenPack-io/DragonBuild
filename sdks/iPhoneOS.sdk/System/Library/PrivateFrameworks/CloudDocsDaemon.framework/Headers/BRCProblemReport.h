//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCProblemReport : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_problems;
    BOOL _needsSyncUp;
    int _state;
    NSNumber *_pendingRequestID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL needsSyncUp; // @synthesize needsSyncUp=_needsSyncUp;
@property(retain, nonatomic) NSNumber *pendingRequestID; // @synthesize pendingRequestID=_pendingRequestID;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (id)description;
- (void)addProblemWithType:(int)arg1 recordName:(id)arg2;
- (void)_addProblem:(id)arg1;
@property(readonly, nonatomic) NSSet *effectedRecordNames;
@property(readonly, nonatomic) NSString *effectiveProblemMessage;
- (int)_effectiveProblemType;
- (int)_priorityForProblemType:(int)arg1;
- (int)_zoneStateForProblemType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithProblemReport:(id)arg1;
- (id)init;

@end

