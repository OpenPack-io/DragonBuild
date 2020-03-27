//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLSamplerState-Protocol.h>
#import <MetalTools/MTLSamplerStateSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsSamplerState : MTLToolsObject <MTLSamplerState, MTLSamplerStateSPI>
{
}

@property(readonly) NSUInteger uniqueIdentifier;
@property(nonatomic) NSUInteger resourceIndex;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (void)dealloc;
- (void)acceptVisitor:(id)arg1;

@end

