//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITableViewDropAnimation.h>

@class UIDragPreviewTarget, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationToTarget : _UITableViewDropAnimation
{
    BOOL _didSearchForCell;
    UIDragPreviewTarget *_target;
    UITableViewCell *_cell;
}

@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) BOOL didSearchForCell; // @synthesize didSearchForCell=_didSearchForCell;
@property(retain, nonatomic) UIDragPreviewTarget *target; // @synthesize target=_target;
// - (void).cxx_destruct;
- (id)cellForTargetContainerInTableView:(id)arg1;
- (id)initWithDragItem:(id)arg1 target:(id)arg2;

@end

