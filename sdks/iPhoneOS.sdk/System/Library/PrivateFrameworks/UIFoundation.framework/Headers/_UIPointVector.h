//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _UIPointVector : NSObject
{
    NSUInteger _count;
    NSUInteger _capacity;
    MISSING_TYPE *_vectors;
}

@property(nonatomic) NSUInteger capacity; // @synthesize capacity=_capacity;
@property(nonatomic) NSUInteger count; // @synthesize count=_count;
@property(nonatomic) MISSING_TYPE *vectors; // @synthesize vectors=_vectors;
- (void)dealloc;
- (void)reset;
- (void)clear;
- (MISSING_TYPE *)lastVector;
- (MISSING_TYPE *)vectorAtIndex:(NSUInteger)arg1;
- (void)removeVectorAtIndex:(NSUInteger)arg1;
- 
- (id)init;

@end

