//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFAKOverlayAdaptorPrivate, PDFView;

__attribute__((visibility("hidden")))
@interface PDFAKOverlayAdaptor : NSObject
{
    PDFAKOverlayAdaptorPrivate *_private;
}

+ (id)instanceForPlatformWithPDFView:(id)arg1;
// - (void).cxx_destruct;
- (void)_selectionDidEndChanging:(id)arg1;
- (void)_selectionWillBeginChanging:(id)arg1;
- (void)_selectionChanged:(id)arg1;
- (void)_currentPageChanged:(id)arg1;
- (void)_pageRotationChanged:(id)arg1;
- (void)_teardownRotationNotificationObservationForPageAtIndex:(NSUInteger)arg1;
- (void)_setupRotationNotificationObservationForPageAtIndex:(NSUInteger)arg1;
- (void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_uninstallAllOverlays;
- (void)_uninstallOverlayAtIndex:(NSUInteger)arg1;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(NSUInteger)arg3;
- (id)_annotationController;
- (id)_pdfView;
- (void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(NSUInteger)arg4;
- (void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(NSUInteger)arg4;
- (void)pdfView:(id)arg1 didSetDocument:(id)arg2;
- (void)pdfView:(id)arg1 willSetDocument:(id)arg2;
@property(readonly, nonatomic) __weak PDFView *pdfView;
- (void)_teardown;
- (void)teardown;
- (void)dealloc;
- (id)initWithPDFView:(id)arg1;

@end

