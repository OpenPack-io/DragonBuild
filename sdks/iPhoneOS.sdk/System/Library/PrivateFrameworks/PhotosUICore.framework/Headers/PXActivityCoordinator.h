//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXActivityCoordinator : NSObject
{
    NSMutableArray *_items;
}

+ (id)coordinatorForActivity:(id)arg1;
// - (void).cxx_destruct;
- (void)unregisterItem:(id)arg1;
- (void)registerItem:(id)arg1;
- (id)init;

@end

