//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKNoteEditorViewControllerDelegate-Protocol.h>

@class AKNoteEditorViewController, AKPopupAnnotation, NSString;
@protocol AKNoteEditorControllerDelegate;

@interface AKNoteEditorController : NSObject <AKNoteEditorViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    AKPopupAnnotation *_annotation;
    id <AKNoteEditorControllerDelegate> _delegate;
    AKNoteEditorViewController *_contentViewController;
}

@property(retain) AKNoteEditorViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak id <AKNoteEditorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AKPopupAnnotation *annotation; // @synthesize annotation=_annotation;
// - (void).cxx_destruct;
- (id)_popupBackgroundColorForPopupAnnotation:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)noteEditorViewControllerDidEndEditing:(id)arg1;
- (void)noteEditorViewControllerDidBeginEditing:(id)arg1;
- (void)finishEditing;
- (void)beginEditing:(BOOL)arg1;
- (double)suggestedEditorHeightForWidth:(double)arg1;
@property(readonly, nonatomic) NSString *editedText;
- (void)hide;
- (void)show:(BOOL)arg1;

@end

