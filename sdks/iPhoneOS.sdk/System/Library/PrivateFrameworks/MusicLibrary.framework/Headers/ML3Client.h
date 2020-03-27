//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface ML3Client : NSObject
{
    int _processID;
    NSXPCConnection *_connection;
    NSString *_name;
    NSString *_bundleID;
}

+ (id)processClient;
+ (id)daemonClient;
@property(readonly, nonatomic) int processID; // @synthesize processID=_processID;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isDaemonClient) BOOL daemonClient;
- (id)description;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end

