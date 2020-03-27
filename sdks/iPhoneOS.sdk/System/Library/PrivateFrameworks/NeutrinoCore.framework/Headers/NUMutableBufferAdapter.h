//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUBufferAdapter.h>

#import <NeutrinoCore/NUMutableBuffer-Protocol.h>
#import <NeutrinoCore/NUMutableBufferProvider-Protocol.h>

@interface NUMutableBufferAdapter : NUBufferAdapter <NUMutableBuffer, NUMutableBufferProvider>
{
    void _mutableBytes;
}

- (void)provideMutableBuffer:(id /* CDUnknownBlockType */)arg1;
- (id)newRenderDestination;
- (void )mutableBytesAtPoint:(CDStruct_912cb5d2)arg1;
@property(readonly, nonatomic) void mutableBytes;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void )arg4;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 rowBytes:(long long)arg3 mutableBytes:(void )arg4;
- (id)initWithMutableBuffer:(id)arg1;

@end

