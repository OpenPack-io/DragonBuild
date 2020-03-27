//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PDFKit/PDFPageLayerInterface-Protocol.h>

@class PDFPageViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageView : UIView <UITextViewDelegate, PDFPageLayerInterface>
{
    PDFPageViewPrivate *_private;
}

// - (void).cxx_destruct;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setState:(long long)arg1 onButtonWidgetAnnotation:(id)arg2;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTableView:(id)arg3;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTextField:(id)arg3;
- (void)setStringValue:(id)arg1 onTextWidgetAnnotation:(id)arg2 withTextView:(id)arg3;
- (BOOL)_shouldReplaceStringOnAnnotation:(id)arg1 withTextView:(id)arg2;
- (void)_setAttributedStringForAnnotation:(id)arg1 stringValue:(id)arg2 textView:(id)arg3;
- (BOOL)_allowsFormFieldEntry;
- (void)_formChanged:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_addPDFAnnotation:(id)arg1;
- (void)_addPDFAnnotationStampSignature:(id)arg1;
- (void)_choiceWidgetDone;
- (void)_addPDFAnnotationChoiceWidget:(id)arg1;
- (void)_addPDFAnnotationTextWidget:(id)arg1;
- (CGPoint)convertPointToPageView:(CGPoint)arg1;
- (CGAffineTransform)_rotationTransformForPageView;
- (CGRect)convertRectToPageView:(CGRect)arg1;
- (void)_updateWidgetControl:(id)arg1 forBounds:(CGRect)arg2;
- (void)_setuppageAnnotationEffects;
- (void)updateBookmark;
- (void)removeBookmark;
- (void)addBookmark;
- (void)_setupBookmarkLayer;
- (void)setHidden:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)markupAnnotationsForIndexSet:(id)arg1;
- (void)addMarkupWithStyle:(NSUInteger)arg1 forIndexSet:(id)arg2;
- (void)removeControlForAnnotation:(id)arg1;
- (void)_rotateActiveAnnotation;
- (void)addControlForAnnotation:(id)arg1;
- (id)activeAnnotation;
- (void)removeAnnotation:(id)arg1;
- (void)_updateAnnotationVisibility:(id)arg1;
- (void)updateAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)colorWidgetBackgrounds:(BOOL)arg1;
- (void)hideTileLayer:(BOOL)arg1;
- (void)previewRotatePage:(double)arg1;
- (void)addSearchSelection:(id)arg1;
- (void)setSearchSelections:(id)arg1;
- (int)backgroundImageQuality;
- (id)backgroundImage;
- (BOOL)hasBackgroundImage;
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;
- (id)pageLayer;
- (id)geometryInterface;
- (id)page;
- (void)_updateBackgroundColor;
- (void)_didRotatePageNotification:(id)arg1;
- (NSUInteger)visibilityDelegateIndex;
- (void)setVisibilityDelegateIndex:(NSUInteger)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)clearTiles;
- (void)forceTileUpdate;
- (BOOL)enablesTileUpdates;
- (void)setEnableTileUpdates:(BOOL)arg1;
- (void)scalePageLayerEffects:(double)arg1;
- (CGAffineTransform)layerEffectTransform;
- (void)updatePageLayerEffects;
- (void)updatePageLayerEffectForID:(id)arg1;
- (id)pageLayerEffectForID:(id)arg1;
- (void)removePageLayerEffectForID:(id)arg1;
- (void)addPageLayerEffect:(id)arg1;
- (BOOL)isVisible;
- (long long)displayBox;
- (void)setNeedsTilesUpdate;
- (id)renderingProperties;
- (void)dealloc;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;

@end

