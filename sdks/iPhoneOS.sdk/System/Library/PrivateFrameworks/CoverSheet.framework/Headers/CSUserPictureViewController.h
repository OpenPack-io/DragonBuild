//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <CoverSheet/CSEventHandling-Protocol.h>

@class CSUserPictureView, UMUser;

@interface CSUserPictureViewController : CSCoverSheetViewControllerBase <CSEventHandling>
{
    UMUser *_user;
    CSUserPictureView *_userPictureView;
}

+ (Class)viewClass;
+ (BOOL)isUserPictureSupported;
// - (void).cxx_destruct;
- (BOOL)handleEvent:(id)arg1;
- (long long)presentationType;
- (long long)presentationStyle;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)view;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

