//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ASDBetaAppDisplayNames, ASDBetaAppVersion, NSDate, NSDictionary, NSString;

@interface ASDBetaAppLaunchInfo : NSObject <NSSecureCoding>
{
    BOOL _feedbackEnabled;
    BOOL _launchScreenEnabled;
    BOOL _sharedFeedback;
    NSString *_artistName;
    ASDBetaAppDisplayNames *_displayNames;
    NSDate *_expirationDate;
    NSString *_iconURLTemplate;
    NSDate *_lastWelcomeScreenViewDate;
    NSDictionary *_localizedTestNotes;
    NSString *_testerEmail;
    ASDBetaAppVersion *_version;
}

+ (BOOL)supportsSecureCoding;
@property(copy) ASDBetaAppVersion *version; // @synthesize version=_version;
@property(copy) NSString *testerEmail; // @synthesize testerEmail=_testerEmail;
@property(getter=hasSharedFeedback) BOOL sharedFeedback; // @synthesize sharedFeedback=_sharedFeedback;
@property(copy) NSDictionary *localizedTestNotes; // @synthesize localizedTestNotes=_localizedTestNotes;
@property(getter=isLaunchScreenEnabled) BOOL launchScreenEnabled; // @synthesize launchScreenEnabled=_launchScreenEnabled;
@property(copy) NSDate *lastWelcomeScreenViewDate; // @synthesize lastWelcomeScreenViewDate=_lastWelcomeScreenViewDate;
@property(copy) NSString *iconURLTemplate; // @synthesize iconURLTemplate=_iconURLTemplate;
@property(getter=isFeedbackEnabled) BOOL feedbackEnabled; // @synthesize feedbackEnabled=_feedbackEnabled;
@property(copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) ASDBetaAppDisplayNames *displayNames; // @synthesize displayNames=_displayNames;
@property(copy) NSString *artistName; // @synthesize artistName=_artistName;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

