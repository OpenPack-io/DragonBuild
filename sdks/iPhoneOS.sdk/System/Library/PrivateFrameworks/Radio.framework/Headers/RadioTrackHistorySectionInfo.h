//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying>
{
    NSString *_indexTitle;
    NSString *_name;
    NSUInteger _numberOfObjects;
    NSArray *_objects;
}

@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NSUInteger numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

