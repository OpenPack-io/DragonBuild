//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSASymbolInfo : NSObject
{
    unsigned char _uuid[16];
    NSUInteger _start;
    NSUInteger _size;
}

@property NSUInteger size; // @synthesize size=_size;
@property NSUInteger start; // @synthesize start=_start;
- (id)get_uuid;
- (id)initWithSharedCache:(unsigned char [16])arg1 atBaseAddress:(NSUInteger)arg2;
- (id)initWithAddress:(NSUInteger)arg1 size:(NSUInteger)arg2 for:(unsigned char [16])arg3;

@end

