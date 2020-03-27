//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMCaptureCoordinationInfo;

@interface CAMCaptureResponse : NSObject
{
    unsigned short _sessionIdentifier;
    long long _type;
    CAMCaptureCoordinationInfo *_coordinationInfo;
}

@property(readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo; // @synthesize coordinationInfo=_coordinationInfo;
@property(readonly, nonatomic) unsigned short sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)releaseCachedImages;
- (id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2 coordinationInfo:(id)arg3;
- (id)init;

@end

