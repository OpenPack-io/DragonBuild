//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerRepeatCommand <MPCPlayerCommand>
@property(readonly, nonatomic) NSArray *supportedRepeatTypes;
- (MPCPlayerCommandRequest *)advance;
- (MPCPlayerCommandRequest *)setRepeatType:(long long)arg1;
@end

