//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIRingsGeometry : NSObject
{
    unsigned int _circleSegments;
    float _startingRadian;
    float _endingRadian;
}

@property(nonatomic) float endingRadian; // @synthesize endingRadian=_endingRadian;
@property(nonatomic) float startingRadian; // @synthesize startingRadian=_startingRadian;
@property(nonatomic) unsigned int circleSegments; // @synthesize circleSegments=_circleSegments;
- (unsigned short )disconnectedIndiciesGeometry;
- (unsigned int)disconnectedIndexCount;
- (unsigned short )connectedIndiciesGeometry;
- (unsigned int)indexCount;
- (void)enumerateVertexGeometryWithBlock:(id /* CDUnknownBlockType */)arg1;
- (unsigned int)vertexCount;
- (id)init;

@end

