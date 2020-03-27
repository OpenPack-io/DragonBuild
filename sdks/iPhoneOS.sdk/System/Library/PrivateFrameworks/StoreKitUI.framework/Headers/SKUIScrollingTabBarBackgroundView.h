//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SKUIScrollingTabBarBackgroundView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_bottomHairlineView;
    UIView *_topHairlineView;
    BOOL _showsBackdrop;
    BOOL _showsBottomHairline;
    BOOL _showsTopHairline;
    BOOL _usesOpaqueColorForTopHairline;
    NSString *_backdropBarGroupName;
}

@property(nonatomic) BOOL usesOpaqueColorForTopHairline; // @synthesize usesOpaqueColorForTopHairline=_usesOpaqueColorForTopHairline;
@property(nonatomic) BOOL showsTopHairline; // @synthesize showsTopHairline=_showsTopHairline;
@property(nonatomic) BOOL showsBottomHairline; // @synthesize showsBottomHairline=_showsBottomHairline;
@property(nonatomic) BOOL showsBackdrop; // @synthesize showsBackdrop=_showsBackdrop;
@property(copy, nonatomic) NSString *backdropBarGroupName; // @synthesize backdropBarGroupName=_backdropBarGroupName;
// - (void).cxx_destruct;
- (void)_updateTopHairlineColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end

