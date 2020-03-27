//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFLibraryResultsController.h>

@class NSMutableSet;

@interface WFEditableLibraryResultsController : WFLibraryResultsController
{
    BOOL _editing;
    NSMutableSet *_selectedWorkflows;
}

@property(readonly, nonatomic) NSMutableSet *selectedWorkflows; // @synthesize selectedWorkflows=_selectedWorkflows;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
// - (void).cxx_destruct;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)removeDeletedResultsFromSelection;
- (void)completedBatchUpdateForSection:(NSUInteger)arg1;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (id)selectedResults;
- (NSUInteger)numberOfSelectedResults;
- (void)markResultAtIndexPath:(id)arg1 asSelected:(BOOL)arg2;
- (id)initWithWorkflows:(id)arg1 collectionView:(id)arg2 runCoordinator:(id)arg3;

@end

