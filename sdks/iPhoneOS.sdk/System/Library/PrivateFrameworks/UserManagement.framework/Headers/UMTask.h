//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface UMTask : NSObject
{
    BOOL _isFinished;
    int _pid;
    NSString *_name;
    NSString *_reason;
    NSString *_bundleID;
    NSUUID *_uuid;
}

+ (id)taskWithName:(id)arg1 reason:(id)arg2 forBundleID:(id)arg3;
+ (id)taskWithName:(id)arg1 reason:(id)arg2;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
- (void)end;
- (void)begin;
- (id)init;

@end

