//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDDataStreamBulkSendListener;

@interface HMDPendingBulkSendListener : NSObject
{
    id <HMDDataStreamBulkSendListener> _listener;
    NSString *_fileType;
}

@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(nonatomic) __weak id <HMDDataStreamBulkSendListener> listener; // @synthesize listener=_listener;
// - (void).cxx_destruct;
- (id)initWithListener:(id)arg1 fileType:(id)arg2;

@end

