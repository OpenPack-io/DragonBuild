//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MKMapItem, NSString, NSURL, UIImage, WBSCompletionQuery, WBSParsecActionButton, WBSParsecImageRepresentation;
@protocol WBSParsecSearchSession;

@protocol WBSParsecSearchResult
@property(readonly, nonatomic) WBSParsecImageRepresentation *completionIcon;
@property(readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property(readonly, copy, nonatomic) NSString *sectionBundleIdentifier;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) WBSParsecActionButton *actionButton;
@property(readonly, copy, nonatomic) NSString *referrerForLoadingResult;
@property(readonly, copy, nonatomic) NSString *mediaKind;
@property(readonly, nonatomic) NSURL *appPunchoutURL;
@property(readonly, nonatomic) NSUInteger minimumRankOfTopHitToSuppressResult;
@property(readonly, copy, nonatomic) NSString *query;
@property(readonly, nonatomic) NSString *completion;
@property(readonly, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) NSString *urlString;
@property(readonly, nonatomic) NSString *feedbackIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *title;
- (UIImage *)completionIconWithSession:(id <WBSParsecSearchSession>)arg1;
- (UIImage *)iconWithSession:(id <WBSParsecSearchSession>)arg1;
- (BOOL)canBecomeTopHitForQuery:(WBSCompletionQuery *)arg1;
@end

