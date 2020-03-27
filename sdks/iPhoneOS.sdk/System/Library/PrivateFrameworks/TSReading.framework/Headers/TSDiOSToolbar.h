//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class UIImage;

@interface TSDiOSToolbar : UIToolbar
{
    UIImage *mBackgroundImage;
    BOOL mDrawsBackground;
    double mShadowOpacity;
    CGSize mShadowOffset;
    double mShadowRadius;
    double mShadowX;
}

@property(nonatomic) double shadowX; // @synthesize shadowX=mShadowX;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=mShadowRadius;
@property(nonatomic) CGSize shadowOffset; // @synthesize shadowOffset=mShadowOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=mShadowOpacity;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=mDrawsBackground;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=mBackgroundImage;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setupShadowPath;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (void)p_updateLayerFlags;
- (void)dealloc;

@end

