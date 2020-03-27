//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AKController, MUContentViewController, MUPDFContentViewController, NSArray, NSURL, NSUndoManager, UIView, UIViewController;

@protocol MUContentViewControllerDelegate <NSObject>
- (NSArray *)annotationControllerOfContentViewController:(MUContentViewController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)positionSketchOverlay:(UIView *)arg1 forContentViewController:(MUContentViewController *)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(NSUInteger)arg1 forContentViewController:(MUContentViewController *)arg2;
- (NSUndoManager *)undoManagerForContentViewController:(MUContentViewController *)arg1;

@optional
- (CGSize)adjustedSourceImageSize;
- (UIViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (void)annotationController:(AKController *)arg1 detectedEditOfType:(NSUInteger)arg2;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (BOOL)contentViewController:(MUPDFContentViewController *)arg1 shouldHandleURL:(NSURL *)arg2;
@end

