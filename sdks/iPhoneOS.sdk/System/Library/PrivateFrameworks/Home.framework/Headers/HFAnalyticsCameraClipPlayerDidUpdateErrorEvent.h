//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAnalyticsEvent.h>

@class NSString, NSUUID;

@interface HFAnalyticsCameraClipPlayerDidUpdateErrorEvent : HFAnalyticsEvent
{
    NSUUID *_playbackSessionID;
    NSString *_errorDomain;
    long long _errorCode;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(retain, nonatomic) NSUUID *playbackSessionID; // @synthesize playbackSessionID=_playbackSessionID;
// - (void).cxx_destruct;
- (id)payload;
- (id)initWithData:(id)arg1;

@end

