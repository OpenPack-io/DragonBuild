//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/PLPlatter-Protocol.h>

@class NSArray, UIControl, UIScrollView;

@protocol PLExpandedPlatter <PLPlatter>
@property(nonatomic) double contentBottomInset;
@property(nonatomic) BOOL clipsVisibleContentToBounds;
@property(nonatomic) long long dismissControlPosition;
@property(readonly, nonatomic) UIEdgeInsets dismissControlInsets;
@property(readonly, nonatomic) UIControl *dismissControl;
@property(nonatomic, getter=isActionsHidden) BOOL actionsHidden;
@property(retain, nonatomic) NSArray *interfaceActions;
@property(nonatomic) CGSize customContentSize;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (UIEdgeInsets)minimumScrollViewContentInsets;
- (CGRect)scrollViewFrame;
- (CGRect)platterFrameForFrame:(CGRect)arg1;
- (CGRect)frameForPlatterFrame:(CGRect)arg1;
- (CGSize)actionsSizeThatFits:(CGSize)arg1;
- (CGSize)contentSizeExcludingActions;
- (CGSize)sizeExcludingActions;
@end

