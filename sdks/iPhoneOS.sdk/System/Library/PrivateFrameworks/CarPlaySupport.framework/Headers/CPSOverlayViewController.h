//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <CarPlaySupport/CPSPreferredFocusManaging-Protocol.h>

@protocol UIFocusItem;

@interface CPSOverlayViewController : UINavigationController <CPSPreferredFocusManaging>
{
    BOOL usePreferredItemOnNextUpdate;
    id <UIFocusItem> preferredFocusItem;
}

@property(nonatomic) BOOL usePreferredItemOnNextUpdate; // @synthesize usePreferredItemOnNextUpdate;
@property(nonatomic) __weak id <UIFocusItem> preferredFocusItem; // @synthesize preferredFocusItem;
// - (void).cxx_destruct;
- (id)_linearFocusMovementSequences;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)templates;
- (id)topTemplate;
- (void)dismissTemplateAnimated:(BOOL)arg1;
- (id)presentedTemplateViewController;
- (void)presentActionSheetTemplate:(id)arg1 animated:(BOOL)arg2;
- (void)presentTemplateViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushTemplateViewController:(id)arg1 animated:(BOOL)arg2 presentationStyle:(NSUInteger)arg3;
- (void)popToRootTemplateAnimated:(BOOL)arg1;
- (void)popToTemplate:(id)arg1 animated:(BOOL)arg2;
- (id)viewControllerForTemplate:(id)arg1;
- (NSUInteger)indexOfTemplate:(id)arg1;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

@end

