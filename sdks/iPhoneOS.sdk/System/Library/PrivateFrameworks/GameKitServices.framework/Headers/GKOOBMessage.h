//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKOOBMessage : NSObject
{
    unsigned short _type;
}

@property(readonly) unsigned short type; // @synthesize type=_type;
- (BOOL)_checkSize:(NSUInteger)arg1;
- (BOOL)_checkType:(unsigned short)arg1;
- (id)data;
- (id)initWithBytes:(const void )arg1 length:(NSUInteger)arg2;
- (id)initWithMessageType:(unsigned short)arg1;

@end

