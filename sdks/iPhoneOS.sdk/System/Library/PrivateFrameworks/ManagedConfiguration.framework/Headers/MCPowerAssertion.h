//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCProcessAssertion.h>

@interface MCPowerAssertion : MCProcessAssertion
{
    BOOL _parked;
}

@property(readonly, nonatomic, getter=isParked) BOOL parked; // @synthesize parked=_parked;
- (void)unpark;
- (void)park;
- (void)dealloc;
- (id)init;

@end

