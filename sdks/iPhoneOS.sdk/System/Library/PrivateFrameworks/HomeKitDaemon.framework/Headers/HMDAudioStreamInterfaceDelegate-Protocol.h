//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDAudioStreamInterface, NSError;

@protocol HMDAudioStreamInterfaceDelegate <NSObject>
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didStop:(NSError *)arg2;
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didResume:(NSError *)arg2;
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didPause:(NSError *)arg2;
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didStart:(NSError *)arg2;
@end

