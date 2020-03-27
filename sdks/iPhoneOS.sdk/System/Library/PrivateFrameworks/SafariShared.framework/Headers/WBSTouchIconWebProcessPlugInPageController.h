//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSWebProcessPlugInPageController.h>

@protocol WBSTouchIconObserver;

@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController
{
    id <WBSTouchIconObserver> _touchIconObserver;
    NSUInteger _mainFrameMainResourceId;
    BOOL _didRecieveDidHandleOnloadEventsForFrameCallback;
    BOOL _shouldExtractIconsWhenRecievingDidHandleOnloadEventsForFrameCallback;
}

// - (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(NSUInteger)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 didInitiateLoadForResource:(NSUInteger)arg3 request:(id)arg4 pageIsProvisionallyLoading:(BOOL)arg5;
- (id)_extractFaviconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(BOOL )arg2;
- (id)_extractTouchIconURLsIncludingDefaultURLs:(BOOL)arg1 didExtractNonDefaultIconURLs:(BOOL )arg2;
@property(readonly, nonatomic) id <WBSTouchIconObserver> touchIconObserver;

@end

