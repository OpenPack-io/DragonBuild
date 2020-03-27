//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PassKitUI/MKLocalSearchCompleterDelegate-Protocol.h>
#import <PassKitUI/PKAddressTextFieldDelegate-Protocol.h>
#import <PassKitUI/PKCountryPickerViewControllerDelegate-Protocol.h>

@class CNMutablePostalAddress, CNPostalAddressFormattingSpecification, MKLocalSearchCompleter, NSArray, NSString, PKAddressTextField;
@protocol PKAddressEditorViewControllerDelegate;

@interface PKAddressEditorViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, MKLocalSearchCompleterDelegate, PKCountryPickerViewControllerDelegate, PKAddressTextFieldDelegate>
{
    BOOL _preselectedNameField;
    BOOL _displayGivenNameFirst;
    BOOL _displayPhoneticName;
    BOOL _readOnly;
    BOOL _countryIsEditable;
    BOOL _requirementsMet;
    id <PKAddressEditorViewControllerDelegate> _delegate;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_phoneticGivenName;
    NSString *_phoneticFamilyName;
    CNMutablePostalAddress *_inputAddress;
    NSString *_inputLabel;
    NSString *_originalGivenName;
    NSString *_originalFamilyName;
    NSString *_originalPhoneticGivenName;
    NSString *_originalPhoneticFamilyName;
    CNMutablePostalAddress *_originalAddress;
    CNPostalAddressFormattingSpecification *_addressFormatter;
    NSArray *_suggestions;
    MKLocalSearchCompleter *_searchCompleter;
    PKAddressTextField *_currentlySelectedField;
    PKAddressTextField *_firstTextFieldForName;
    NSArray *_editingFields;
    NSArray *_highlightedFieldKeys;
    NSArray *_requiredFieldKeys;
    NSArray *_errors;
    long long _style;
    PKAddressTextField *_givenNameTextField;
    PKAddressTextField *_familyNameTextField;
    PKAddressTextField *_phoneticGivenNameTextField;
    PKAddressTextField *_phoneticFamilyNameTextField;
}

@property(nonatomic) BOOL requirementsMet; // @synthesize requirementsMet=_requirementsMet;
@property(nonatomic) __weak PKAddressTextField *phoneticFamilyNameTextField; // @synthesize phoneticFamilyNameTextField=_phoneticFamilyNameTextField;
@property(nonatomic) __weak PKAddressTextField *phoneticGivenNameTextField; // @synthesize phoneticGivenNameTextField=_phoneticGivenNameTextField;
@property(nonatomic) __weak PKAddressTextField *familyNameTextField; // @synthesize familyNameTextField=_familyNameTextField;
@property(nonatomic) __weak PKAddressTextField *givenNameTextField; // @synthesize givenNameTextField=_givenNameTextField;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSArray *requiredFieldKeys; // @synthesize requiredFieldKeys=_requiredFieldKeys;
@property(retain, nonatomic) NSArray *highlightedFieldKeys; // @synthesize highlightedFieldKeys=_highlightedFieldKeys;
@property(retain, nonatomic) NSArray *editingFields; // @synthesize editingFields=_editingFields;
@property(retain, nonatomic) PKAddressTextField *firstTextFieldForName; // @synthesize firstTextFieldForName=_firstTextFieldForName;
@property(retain, nonatomic) PKAddressTextField *currentlySelectedField; // @synthesize currentlySelectedField=_currentlySelectedField;
@property(retain, nonatomic) MKLocalSearchCompleter *searchCompleter; // @synthesize searchCompleter=_searchCompleter;
@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) CNPostalAddressFormattingSpecification *addressFormatter; // @synthesize addressFormatter=_addressFormatter;
@property(retain, nonatomic) CNMutablePostalAddress *originalAddress; // @synthesize originalAddress=_originalAddress;
@property(retain, nonatomic) NSString *originalPhoneticFamilyName; // @synthesize originalPhoneticFamilyName=_originalPhoneticFamilyName;
@property(retain, nonatomic) NSString *originalPhoneticGivenName; // @synthesize originalPhoneticGivenName=_originalPhoneticGivenName;
@property(retain, nonatomic) NSString *originalFamilyName; // @synthesize originalFamilyName=_originalFamilyName;
@property(retain, nonatomic) NSString *originalGivenName; // @synthesize originalGivenName=_originalGivenName;
@property(retain, nonatomic) NSString *inputLabel; // @synthesize inputLabel=_inputLabel;
@property(retain, nonatomic) CNMutablePostalAddress *inputAddress; // @synthesize inputAddress=_inputAddress;
@property(retain, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property(retain, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(nonatomic) BOOL countryIsEditable; // @synthesize countryIsEditable=_countryIsEditable;
@property(nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) id <PKAddressEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;
- (void)completer:(id)arg1 didFailWithError:(id)arg2;
- (void)completerDidUpdateResults:(id)arg1;
- (void)addressTextField:(id)arg1 textDidChange:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)canChangeCountry;
- (CGSize)preferredContentSize;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_validateAddressRequirements;
- (long long)_fieldIndexForNameComponent:(NSUInteger)arg1;
- (NSUInteger)_nameComponentForFieldIndex:(NSUInteger)arg1;
- (void)_showCountryPicker;
- (void)_updateWithPostalAddress:(id)arg1;
- (void)assignErrorToField:(id)arg1;
- (void)recomputeEditingFields;
- (void)cancel;
- (void)donePressed;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 requiredKeys:(id)arg2 highlightedKeys:(id)arg3 errors:(id)arg4 style:(long long)arg5;
- (id)initWithContact:(id)arg1 style:(long long)arg2;

@end

