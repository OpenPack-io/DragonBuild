//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HIDDisplayPresetInterface, NSData;

@interface HIDDisplayPresetData : NSObject
{
    long long _index;
    HIDDisplayPresetInterface *_deviceRef;
}

// - (void).cxx_destruct;
@property(readonly) NSData *uniqueID;
- (BOOL)set:(id)arg1 error:(id )arg2;
- (id)get:(id )arg1;
@property(readonly) BOOL writable;
@property(readonly) BOOL valid;
- (void)setHidDisplay:(id)arg1;
- (id)hidDisplay;
- (id)initWithDisplayDevice:(id)arg1 index:(long long)arg2;

@end

