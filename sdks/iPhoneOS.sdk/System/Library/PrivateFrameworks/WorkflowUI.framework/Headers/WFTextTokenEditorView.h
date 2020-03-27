//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/WFVariableInsertionFieldDelegate-Protocol.h>

@class NSSet, NSString, UIColor, UIFont, WFTextScrollView, WFTextTokenTextField, WFVariableString;
@protocol WFTextField, WFTextTokenEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFTextTokenEditorView : UIView <UITextFieldDelegate, UITextViewDelegate, WFVariableInsertionFieldDelegate>
{
    BOOL _switching;
    BOOL _secureTextEntry;
    BOOL _editable;
    BOOL _variablesDisabled;
    id <WFTextTokenEditorViewDelegate> _delegate;
    UIFont *_font;
    NSString *_placeholder;
    long long _keyboardType;
    long long _textAlignment;
    NSString *_textContentType;
    long long _autocorrectionType;
    long long _autocapitalizationType;
    long long _smartQuotesType;
    long long _smartDashesType;
    UIColor *_textColor;
    NSUInteger _syntaxHighlightingType;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    NSUInteger _variableResultType;
    id /* CDUnknownBlockType */ _updateBlock;
    id /* CDUnknownBlockType */ _revealBlock;
    WFTextTokenTextField *_textField;
    WFTextScrollView *_scrollView;
}

@property(retain, nonatomic) WFTextScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) WFTextTokenTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) id /* CDUnknownBlockType */ revealBlock; // @synthesize revealBlock=_revealBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) BOOL variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;
@property(nonatomic) NSUInteger variableResultType; // @synthesize variableResultType=_variableResultType;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(nonatomic) NSUInteger syntaxHighlightingType; // @synthesize syntaxHighlightingType=_syntaxHighlightingType;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic) long long smartDashesType; // @synthesize smartDashesType=_smartDashesType;
@property(nonatomic) long long smartQuotesType; // @synthesize smartQuotesType=_smartQuotesType;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) __weak id <WFTextTokenEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)paste:(id)arg1;
- (void)insertVariable:(id)arg1;
- (void)textDidChange;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)beginEditingWithContext:(id)arg1;
- (void)selectRange:(_NSRange)arg1;
@property(copy, nonatomic) WFVariableString *variableString;
@property(copy, nonatomic) NSString *text;
- (void)dealloc;
- (void)removeTextChangeObserver;
- (void)layoutSubviews;
- (void)setUsesTextView:(BOOL)arg1;
- (BOOL)usesTextView;
@property(readonly, nonatomic) UIView<WFTextField> *currentField;
- (id)currentView;
- (id)init;

@end

