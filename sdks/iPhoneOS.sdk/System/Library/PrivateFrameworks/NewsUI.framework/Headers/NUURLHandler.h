//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXURLHandling-Protocol.h>
#import <NewsUI/SXURLPreviewing-Protocol.h>

@class NSMutableArray;
@protocol NUPreviewViewControllerFactory, NUURLHandlerDelegate, NUURLHandling, NUWebViewControllerFactory;

@interface NUURLHandler : NSObject <SXURLHandling, SXURLPreviewing>
{
    BOOL _universalLinksEnabled;
    id <NUURLHandlerDelegate> _delegate;
    id <NUWebViewControllerFactory> _webViewControllerFactory;
    id <NUPreviewViewControllerFactory> _previewViewControllerFactory;
    id <NUURLHandling> _URLHandling;
    NSMutableArray *_modifiers;
}

@property(readonly, nonatomic) NSMutableArray *modifiers; // @synthesize modifiers=_modifiers;
@property(readonly, nonatomic) BOOL universalLinksEnabled; // @synthesize universalLinksEnabled=_universalLinksEnabled;
@property(readonly, nonatomic) id <NUURLHandling> URLHandling; // @synthesize URLHandling=_URLHandling;
@property(retain, nonatomic) id <NUPreviewViewControllerFactory> previewViewControllerFactory; // @synthesize previewViewControllerFactory=_previewViewControllerFactory;
@property(retain, nonatomic) id <NUWebViewControllerFactory> webViewControllerFactory; // @synthesize webViewControllerFactory=_webViewControllerFactory;
@property(nonatomic) __weak id <NUURLHandlerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2;
- (id)modifyURL:(id)arg1;
- (void)openURL:(id)arg1;
- (void)commitViewController:(id)arg1 URL:(id)arg2;
- (id)viewControllerForURL:(id)arg1;
- (void)removeModifier:(id)arg1;
- (void)addModifier:(id)arg1;
- (id)initWithURLHandling:(id)arg1 universalLinksEnabled:(BOOL)arg2;

@end

