//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SXClippingView : UIView
{
    UIView *_contentView;
    NSUInteger _clippingMode;
    CGSize _contentSize;
    CGRect _contentFrame;
}

+ (Class)layerClass;
@property(nonatomic) NSUInteger clippingMode; // @synthesize clippingMode=_clippingMode;
@property(nonatomic) CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) CGSize contentSize; // @synthesize contentSize=_contentSize;
// - (void).cxx_destruct;
- (id)initWithContentView:(id)arg1;

@end

