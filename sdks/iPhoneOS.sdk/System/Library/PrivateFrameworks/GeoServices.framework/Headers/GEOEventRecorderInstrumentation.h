//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface GEOEventRecorderInstrumentation : NSObject
{
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSString *_filepath;
    NSString *_geoFilepath;
    NSString *_movieFilepath;
    NSDate *_startDate;
}

+ (void)endInstrumentation;
+ (id)defaultInstrumentation;
+ (id)initializeDefaultInstrumentation;
// - (void).cxx_destruct;
- (void)initializeFilepaths;
- (void)_captureScreenVideo:(id)arg1;
- (void)captureEventRecorderScreenVideo;
- (void)writeString:(id)arg1 ToFilepath:(id)arg2;
- (void)captureUserActionLogMessageEvent:(id)arg1;
- (void)captureUIEvent:(id)arg1;
- (void)_setupLogging;
- (id)getRecordedFilePaths;
- (id)init;

@end

