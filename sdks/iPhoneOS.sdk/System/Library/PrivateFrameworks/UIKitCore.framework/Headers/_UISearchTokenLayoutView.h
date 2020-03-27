//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@protocol _UIAtomTextViewAtomLayout;

__attribute__((visibility("hidden")))
@interface _UISearchTokenLayoutView : UIView
{
    UIView<_UIAtomTextViewAtomLayout> *_delegateView;
}

+ (id)layoutViewWithDelegateView:(id)arg1;
@property(retain, nonatomic) UIView<_UIAtomTextViewAtomLayout> *delegateView; // @synthesize delegateView=_delegateView;
// - (void).cxx_destruct;
- (CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(NSUInteger)arg4;
- (CGRect)selectionBounds;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)viewForLastBaselineLayout;
@property(readonly, nonatomic) UIEdgeInsets atomInsets;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (id)initWithDelegateView:(id)arg1;

@end

