//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject
{
}

@property(nonatomic) int identifier;
@property(copy, nonatomic) NSString *data;
@property(nonatomic) long long type;
- (id)initWithType:(long long)arg1;

@end

