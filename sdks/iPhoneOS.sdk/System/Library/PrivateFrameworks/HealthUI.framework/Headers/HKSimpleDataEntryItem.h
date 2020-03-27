//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HKSimpleDataEntryItemDelegate, HKSimpleDataEntryItemToolbarDelegate;

@interface HKSimpleDataEntryItem : NSObject
{
    id <HKSimpleDataEntryItemDelegate> _delegate;
    id <HKSimpleDataEntryItemToolbarDelegate> _toolbarDelegate;
    NSUInteger _placeholderType;
}

@property(nonatomic) NSUInteger placeholderType; // @synthesize placeholderType=_placeholderType;
@property(nonatomic) __weak id <HKSimpleDataEntryItemToolbarDelegate> toolbarDelegate; // @synthesize toolbarDelegate=_toolbarDelegate;
@property(nonatomic) __weak id <HKSimpleDataEntryItemDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)toolbarDoneButtonPressed:(id)arg1;
- (void)toolbarNextButtonPressed:(id)arg1;
- (void)toolbarPrevButtonPressed:(id)arg1;
- (id)accessoryToolbar;
- (void)localeDidChange:(id)arg1;
- (void)beginEditing;
- (void)updateCellDisplay;
- (id)cell;
- (id)formattedKeyAndValue;

@end

