//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPItem, MISSING_TYPE;

@interface _TtC26DocumentManagerExecutables21DOCInteractionManager : NSObject
{
    MISSING_TYPE *lastOpenedItem;
    MISSING_TYPE *lastSelectedItem;
}

+ (void)setSharedManagerWith:(id)arg1 to:(id)arg2;
+ (void)clearSharedControllerFor:(id)arg1;
+ (id)sharedManagerFor:(id)arg1;
// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) FPItem *lastSelectedItem; // @synthesize lastSelectedItem;
@property(nonatomic, retain) FPItem *lastOpenedItem; // @synthesize lastOpenedItem;

@end

