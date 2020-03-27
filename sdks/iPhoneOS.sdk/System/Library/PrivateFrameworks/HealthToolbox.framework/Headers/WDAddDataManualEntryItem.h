//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol WDAddDataManualEntryItemDelegate;

__attribute__((visibility("hidden")))
@interface WDAddDataManualEntryItem : NSObject
{
    NSNumber *_identifier;
    NSString *_title;
    NSString *_secondaryLabel;
    id <WDAddDataManualEntryItemDelegate> _delegate;
}

+ (id)heightPickerItemWithFeetUnitString:(id)arg1 inchUnitString:(id)arg2;
+ (id)multiSelectItemWithEntries:(id)arg1 selectedIndex:(long long)arg2;
+ (id)numericItemWithManualEntryType:(NSUInteger)arg1 numberFormatter:(id)arg2;
+ (id)twoPartDateRangeItemWithMaximumEndDate:(id)arg1;
+ (id)twoPartDateTimeItemWithMaximumDate:(id)arg1;
+ (id)dateTimeItemWithMaximumDate:(id)arg1 highlightWhenEditing:(BOOL)arg2;
+ (id)dateTimeItemWithMaximumDate:(id)arg1;
+ (id)timeItemWithMaximumDate:(id)arg1;
+ (id)dateItemWithMaximumDate:(id)arg1;
@property(nonatomic) __weak id <WDAddDataManualEntryItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)cellForItemTapped:(id)arg1;
- (id)tableViewCells;
- (void)beginEditing;
- (void)resetItem;
- (void)setValue:(id)arg1;
- (id)generateValue;
- (void)_disambiguateDateComponents:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_didUpdateValue;
- (id)_createWDManualDataEntryTableViewCellWithDisplayName:(id)arg1 unitName:(id)arg2 entryType:(NSUInteger)arg3 highlightWhenEditing:(BOOL)arg4;
- (id)_createUITableViewCell;

@end

