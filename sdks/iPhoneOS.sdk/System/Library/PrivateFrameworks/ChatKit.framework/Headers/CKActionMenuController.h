//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKActionMenuView, NSArray;
@protocol CKActionMenuControllerDelegate;

@interface CKActionMenuController : NSObject
{
    NSUInteger _defaultActionIndex;
    id <CKActionMenuControllerDelegate> _delegate;
    NSArray *_passthroughViews;
    CKActionMenuView *_actionMenuView;
}

@property(retain, nonatomic) CKActionMenuView *actionMenuView; // @synthesize actionMenuView=_actionMenuView;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) __weak id <CKActionMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUInteger defaultActionIndex; // @synthesize defaultActionIndex=_defaultActionIndex;
// - (void).cxx_destruct;
- (CGRect)convertActionMenuFrameToView:(id)arg1;
- (void)dismissActionMenuAnimated:(BOOL)arg1;
- (void)presentActionMenuFromPoint:(CGPoint)arg1 inView:(id)arg2 animated:(BOOL)arg3;
@property(readonly, nonatomic, getter=isActionMenuVisible) BOOL actionMenuVisible;
@property(readonly, copy, nonatomic) NSArray *actionMenuItems;
- (void)setActionMenuItems:(id)arg1 defaultActionIndex:(NSUInteger)arg2 animated:(BOOL)arg3;
- (id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(NSUInteger)arg2 blurEffectStyle:(long long)arg3;
- (void)dealloc;

@end

