//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UICollectionView, UITableView;

__attribute__((visibility("hidden")))
@interface _UIIndexPathIdentityTracker : NSObject
{
    UITableView *_tableView;
    UICollectionView *_collectionView;
    id _identityBasedDataSource;
    NSMutableDictionary *_mapping;
    BOOL _enforcesManualMapping;
}

// - (void).cxx_destruct;
- (void)enforceManualMapping;
- (id)init;
- (void)reset;
- (void)updateWithUpdateItems:(id)arg1;
- (id)currentIndexPathForIdentifier:(id)arg1;
- (id)identifierForIndexPath:(id)arg1;
- (id)_mappingIdentifierForSanitizedIndexPath:(id)arg1;
- (id)initWithCollectionView:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end

