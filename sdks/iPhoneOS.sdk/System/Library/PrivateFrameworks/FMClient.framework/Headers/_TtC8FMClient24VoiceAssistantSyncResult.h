//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet, NSString;

@interface _TtC8FMClient24VoiceAssistantSyncResult : NSObject
{
    MISSING_TYPE *devices;
    MISSING_TYPE *anchor;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevices:(id)arg1 anchor:(id)arg2;
@property(nonatomic, readonly) NSString *anchor;
@property(nonatomic, readonly) NSSet *devices;

@end

