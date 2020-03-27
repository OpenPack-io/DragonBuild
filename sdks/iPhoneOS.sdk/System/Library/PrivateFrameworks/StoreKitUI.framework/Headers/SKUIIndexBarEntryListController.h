//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKUIViewElement;
@protocol SKUIIndexBarEntryListControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarEntryListController : NSObject
{
    BOOL _needsRootTargetViewElement;
    BOOL _hidesIndexBar;
    id <SKUIIndexBarEntryListControllerDelegate> _delegate;
    NSString *_rootTargetIndexBarEntryID;
    SKUIViewElement *_rootTargetViewElement;
    long long _numberOfEntryDescriptors;
}

+ (id)entryListControllerForEntryListViewElement:(id)arg1;
+ (id)entryListControllerForEntryViewElement:(id)arg1;
@property(readonly, nonatomic) long long numberOfEntryDescriptors; // @synthesize numberOfEntryDescriptors=_numberOfEntryDescriptors;
@property(retain, nonatomic) SKUIViewElement *rootTargetViewElement; // @synthesize rootTargetViewElement=_rootTargetViewElement;
@property(readonly, nonatomic) NSString *rootTargetIndexBarEntryID; // @synthesize rootTargetIndexBarEntryID=_rootTargetIndexBarEntryID;
@property(readonly, nonatomic) BOOL hidesIndexBar; // @synthesize hidesIndexBar=_hidesIndexBar;
@property(readonly, nonatomic) BOOL needsRootTargetViewElement; // @synthesize needsRootTargetViewElement=_needsRootTargetViewElement;
@property(nonatomic) __weak id <SKUIIndexBarEntryListControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_didInvalidate;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long )arg2;
- (void)reloadViewElementData;
- (id)entryDescriptorAtIndex:(long long)arg1;

@end

