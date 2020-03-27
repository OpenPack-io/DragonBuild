//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface PIMsgImageBuffer : NSObject
{
    NSUInteger elementByteSize;
    NSUInteger rowElements;
    NSUInteger width;
    NSUInteger height;
    int format;
    CGColorSpace bufferColorspace;
    NSMutableData *data;
}

@property(readonly) int format; // @synthesize format;
@property(readonly) NSUInteger height; // @synthesize height;
@property(readonly) NSUInteger width; // @synthesize width;
@property(readonly) NSUInteger rowElements; // @synthesize rowElements;
@property(readonly) NSUInteger elementByteSize; // @synthesize elementByteSize;
@property(retain) NSMutableData *data; // @synthesize data;
// - (void).cxx_destruct;
- (id)image;
- (void )bytes;
- (void)dealloc;
- (id)initWithData:(id)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(NSUInteger)arg5 format:(int)arg6 colorspace:(CGColorSpace )arg7;
- (id)initWithBytes:(void )arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(NSUInteger)arg5 format:(int)arg6 colorspace:(CGColorSpace )arg7;

@end

