//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class STSetupAssistantUsageDetailsCoordinator, STWeeklyReportViewController, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface STSetupAssistantPosedDeviceViewController : UIViewController
{
    BOOL _isiPad;
    long long _deviceSize;
    STSetupAssistantUsageDetailsCoordinator *_coordinator;
    STWeeklyReportViewController *_reportViewController;
    UIImageView *_deviceWithScreenImageView;
    UILabel *_screenTimeLabel;
    UILabel *_manageScreenTimeLabel;
    UIView *_screenTimeLabelTopLayoutGuide;
    UIView *_manageScreenTimeLabelBottomLayoutGuide;
}

@property(retain) UIView *manageScreenTimeLabelBottomLayoutGuide; // @synthesize manageScreenTimeLabelBottomLayoutGuide=_manageScreenTimeLabelBottomLayoutGuide;
@property(retain) UIView *screenTimeLabelTopLayoutGuide; // @synthesize screenTimeLabelTopLayoutGuide=_screenTimeLabelTopLayoutGuide;
@property(retain) UILabel *manageScreenTimeLabel; // @synthesize manageScreenTimeLabel=_manageScreenTimeLabel;
@property(retain) UILabel *screenTimeLabel; // @synthesize screenTimeLabel=_screenTimeLabel;
@property(retain) UIImageView *deviceWithScreenImageView; // @synthesize deviceWithScreenImageView=_deviceWithScreenImageView;
@property(readonly) STWeeklyReportViewController *reportViewController; // @synthesize reportViewController=_reportViewController;
@property(readonly) STSetupAssistantUsageDetailsCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly) long long deviceSize; // @synthesize deviceSize=_deviceSize;
@property(readonly) BOOL isiPad; // @synthesize isiPad=_isiPad;
// - (void).cxx_destruct;
- (BOOL)_isRTL;
- (double)_notificationTopOffset;
- (double)_notificationWidth;
- (id)_deviceBezelImageName;
- (double)_screenTimeTopOffset;
- (double)_screenTimeTrailingOffset;
- (double)_screenTimeLeadingOffset;
- (id)_deviceWithScreenImage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)_stSetupAssistantPosedDeviceViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

