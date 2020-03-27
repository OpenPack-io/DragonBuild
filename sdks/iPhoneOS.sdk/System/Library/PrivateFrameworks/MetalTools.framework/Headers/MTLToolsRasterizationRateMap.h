//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLRasterizationRateMapSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface MTLToolsRasterizationRateMap : MTLToolsObject <MTLRasterizationRateMapSPI>
{
}

- (id)formattedDescription:(NSUInteger)arg1;
- (void)copyParameterDataToBuffer:(id)arg1 offset:(NSUInteger)arg2;
- (CDStruct_b2fbf00d)mapPhysicalToScreenCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(NSUInteger)arg2;
- (CDStruct_b2fbf00d)mapScreenToPhysicalCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(NSUInteger)arg2;
- (CDStruct_14f26992)physicalSizeForLayer:(NSUInteger)arg1;
@property(readonly) CDStruct_4bcfbbae parameterBufferSizeAndAlign;
@property(readonly) NSUInteger layerCount;
@property(readonly) CDStruct_14f26992 physicalGranularity;
@property(readonly) CDStruct_14f26992 screenSize;
@property(readonly) NSString *label;
- (void)acceptVisitor:(id)arg1;
@property(readonly) id <MTLDevice> device;

@end

