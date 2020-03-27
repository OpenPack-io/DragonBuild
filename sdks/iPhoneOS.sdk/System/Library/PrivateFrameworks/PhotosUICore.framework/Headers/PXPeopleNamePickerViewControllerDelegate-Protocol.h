//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNContact, NSString, PHPerson, PXPeopleNamePickerViewController;

@protocol PXPeopleNamePickerViewControllerDelegate <NSObject>
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickString:(NSString *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickContact:(CNContact *)arg2;
- (void)namePickerController:(PXPeopleNamePickerViewController *)arg1 didPickPerson:(PHPerson *)arg2;

@optional
- (void)namePickerControllerWillChangeText:(PXPeopleNamePickerViewController *)arg1;
- (void)namePickerControllerDidEndEditing:(PXPeopleNamePickerViewController *)arg1;
- (void)namePickerControllerDidStartEditing:(PXPeopleNamePickerViewController *)arg1;
@end

