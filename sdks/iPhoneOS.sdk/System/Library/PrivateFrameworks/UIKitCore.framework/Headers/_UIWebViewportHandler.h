//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UIWebViewportHandlerDelegate;

@interface _UIWebViewportHandler : NSObject
{
    BOOL _initialConfigurationHasBeenSentToDelegate;
    struct _UIWebViewportConfiguration _defaultConfiguration;
    struct _UIWebViewportConfiguration _configuration;
    unsigned int _webkitDefinedConfigurationFlags;
    CGSize _availableViewSize;
    CGSize _viewportArgumentsSize;
    BOOL _widthIsDeviceWidth;
    BOOL _heightIsDeviceHeight;
    BOOL _isInUpdateBlock;
    BOOL _classicViewportMode;
    id <_UIWebViewportHandlerDelegate> _delegate;
    CGRect _documentBounds;
}

@property(readonly, nonatomic, getter=isClassicViewportMode) BOOL classicViewportMode; // @synthesize classicViewportMode=_classicViewportMode;
@property(readonly, nonatomic) unsigned int webkitDefinedConfigurationFlags; // @synthesize webkitDefinedConfigurationFlags=_webkitDefinedConfigurationFlags;
@property(readonly, nonatomic) CGSize availableViewSize; // @synthesize availableViewSize=_availableViewSize;
@property(readonly, nonatomic) CGRect documentBounds; // @synthesize documentBounds=_documentBounds;
@property(nonatomic) id <_UIWebViewportHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (float)minimumScaleForViewSize:(CGSize)arg1;
- (double)integralScaleForScale:(double)arg1 keepingPointFixed:(CGPoint )arg2;
- (double)integralInitialScale;
- (float)viewportHeight;
- (float)viewportWidth;
- (void)resetViewportConfiguration:(const struct _UIWebViewportConfiguration )arg1;
- (void)overrideViewportConfiguration:(const struct _UIWebViewportConfiguration )arg1;
- (void)clearWebKitViewportConfigurationFlags;
- (void)applyWebKitViewportArgumentsSize:(CGSize)arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5 allowsShrinkToFit:(float)arg6 viewportFit:(id)arg7;
- (void)_resolveViewSizeRelativeLengths;
- (void)setAvailableViewSize:(CGSize)arg1 updateConfigurationSize:(BOOL)arg2;
- (void)update:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) struct _UIWebViewportConfiguration rawViewConfiguration;
- (BOOL)shouldIgnoreScalingConstraints;
- (BOOL)shouldIgnoreVerticalScalingConstraints;
- (BOOL)shouldIgnoreHorizontalScalingConstraints;
@property(readonly, nonatomic) BOOL avoidsUnsafeArea;
@property(readonly, nonatomic) BOOL allowsUserScaling;
@property(readonly, nonatomic) float maximumScale;
@property(readonly, nonatomic) float minimumScale;
@property(readonly, nonatomic) float initialScale;

@end

