//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NotesUI/NoteHTMLEditorViewActionDelegate-Protocol.h>
#import <NotesUI/NoteHTMLEditorViewDelegate-Protocol.h>
#import <NotesUI/NoteHTMLEditorViewLayoutDelegate-Protocol.h>

@class NSArray, NSString, NoteDateLabel, NoteHTMLEditorView;
@protocol NoteContentLayerAttachmentPresentationDelegate, NoteContentLayerDelegate, NotesTextureScrolling;

@interface NoteContentLayer : UIView <NoteHTMLEditorViewDelegate, NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewLayoutDelegate, UIScrollViewDelegate>
{
    BOOL _containsCJK;
    BOOL _tracksMaximumContentLength;
    BOOL _allowsAttachments;
    BOOL _showsDateLabel;
    BOOL _updatedTitleRange;
    id <NoteContentLayerDelegate> _delegate;
    id <NoteContentLayerAttachmentPresentationDelegate> _attachmentPresentationDelegate;
    id <NotesTextureScrolling> _textureScrollingDelegate;
    NoteHTMLEditorView *_noteHTMLEditorView;
    NSArray *_horizontalConstraints;
    NoteDateLabel *_dateLabel;
}

@property(nonatomic) BOOL updatedTitleRange; // @synthesize updatedTitleRange=_updatedTitleRange;
@property(retain, nonatomic) NoteDateLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property(nonatomic) BOOL showsDateLabel; // @synthesize showsDateLabel=_showsDateLabel;
@property(nonatomic) BOOL allowsAttachments; // @synthesize allowsAttachments=_allowsAttachments;
@property(retain, nonatomic) NoteHTMLEditorView *noteHTMLEditorView; // @synthesize noteHTMLEditorView=_noteHTMLEditorView;
@property(nonatomic) BOOL tracksMaximumContentLength; // @synthesize tracksMaximumContentLength=_tracksMaximumContentLength;
@property(nonatomic) __weak id <NotesTextureScrolling> textureScrollingDelegate; // @synthesize textureScrollingDelegate=_textureScrollingDelegate;
@property(nonatomic) BOOL containsCJK; // @synthesize containsCJK=_containsCJK;
@property(nonatomic) __weak id <NoteContentLayerAttachmentPresentationDelegate> attachmentPresentationDelegate; // @synthesize attachmentPresentationDelegate=_attachmentPresentationDelegate;
@property(nonatomic) __weak id <NoteContentLayerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)processMapAttachmentItemProvider:(id)arg1;
- (void)processAttachmentItemProviders:(id)arg1;
- (void)chosenUTI:(id )arg1 andChosenMIMEType:(id )arg2 forItemProvider:(id)arg3;
- (BOOL)isNoteHTMLEditorViewVisible:(id)arg1;
- (BOOL)noteHTMLEditorViewShouldPaste:(id)arg1;
- (void)noteHTMLEditorView:(id)arg1 showShareSheetForAttachment:(id)arg2 atPoint:(CGPoint)arg3;
- (BOOL)shouldRenderAsAttachment:(id)arg1;
- (id)readerDelegateInNoteHTMLEditorView:(id)arg1;
- (BOOL)noteHTMLEditorView:(id)arg1 acceptContentsFromPasteboard:(id)arg2;
- (void)noteHTMLEditorViewNeedsContentReload:(id)arg1;
- (void)insertImageInNoteHTMLEditorView:(id)arg1;
- (BOOL)canInsertImagesInNoteHTMLEditorView:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)noteHTMLEditorView:(id)arg1 webScrollViewDidScroll:(id)arg2;
- (id)noteHTMLEditorView:(id)arg1 updateAttachments:(id)arg2;
- (void)noteHTMLEditorView:(id)arg1 didInvokeStyleFormattingOption:(long long)arg2;
- (void)noteHTMLEditorView:(id)arg1 didInvokeFormattingCalloutOption:(long long)arg2;
- (BOOL)isNoteManagedForNoteHTMLEditorView:(id)arg1;
- (id)noteHTMLEditorView:(id)arg1 attachmentPresentationForContentID:(id)arg2;
- (id)noteHTMLEditorView:(id)arg1 fileURLForAttachmentWithContentID:(id)arg2;
- (void)noteHTMLEditorView:(id)arg1 openURL:(id)arg2;
- (void)noteHTMLEditorViewDidEndEditing:(id)arg1;
- (void)noteHTMLEditorViewDidBeginEditing:(id)arg1;
- (void)noteHTMLEditorViewWillChange:(id)arg1;
- (void)noteHTMLEditorViewDidChange:(id)arg1;
- (BOOL)noteHTMLEditorViewShouldBeginEditing:(id)arg1 isUserInitiated:(BOOL)arg2;
- (void)noteHTMLEditorView:(id)arg1 didAddAttachmentForMimeType:(id)arg2 filename:(id)arg3 data:(id)arg4;
- (id)noteHTMLEditorView:(id)arg1 createAttachmentPresentationWithFileWrapper:(id)arg2 mimeType:(id)arg3;
- (void)noteHTMLEditorView:(id)arg1 addAttachmentItemProviders:(id)arg2;
- (BOOL)noteHTMLEditorView:(id)arg1 canAddAttachmentItemProviders:(id)arg2;
- (BOOL)allowsAttachmentsInNoteHTMLEditorView:(id)arg1;
- (id)keyCommands;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)setSelectionToStart;
- (id)viewPrintFormatter;
- (void)copyNoteHTMLToPasteboard;
- (id)webArchive;
- (void)replaceSelectionWithAttachmentPresentation:(id)arg1;
- (CGRect)rectForDOMNode:(id)arg1;
- (CGRect)rectForSelection;
@property(nonatomic) CGPoint contentOffset;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)didChangeFullSizeClass;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
@property(readonly, nonatomic) BOOL hasFullWidth;
@property(readonly, nonatomic) BOOL hasFullHeight;
- (void)setScrollIndicatorInsets:(UIEdgeInsets)arg1;
- (void)flashScrollIndicators;
@property(readonly, nonatomic) BOOL contentContainsValuableContent;
@property(readonly, nonatomic) NSString *title;
- (id)contentAsPlainText:(BOOL)arg1;
@property(nonatomic, getter=isEditable) BOOL editable;
- (void)forcedSetContainsCJK:(BOOL)arg1;
- (void)setContent:(id)arg1 isPlainText:(BOOL)arg2 isCJK:(BOOL)arg3 attachments:(id)arg4;
- (void)setTimestampDate:(id)arg1;
- (void)updateDateLabel;
- (void)reloadInterface;
- (void)updateConstraints;
- (void)updateMarginConstraints;
- (void)invalidateSizeRelatedConstraints;
- (void)updateHorizontalConstraints;
- (void)dealloc;
- (void)insertDateLabel;
- (id)initWithFrame:(CGRect)arg1;

@end

