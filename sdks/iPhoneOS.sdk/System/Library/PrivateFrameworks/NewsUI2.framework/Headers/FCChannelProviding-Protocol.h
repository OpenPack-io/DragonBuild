//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/FCTagProviding-Protocol.h>

@class NSArray, NSString;

@protocol FCChannelProviding <FCTagProviding>
@property(nonatomic, readonly) NSString *supergroupConfigJson;
@property(nonatomic, readonly) NSString *supergroupKnobsJson;
- (NSString *)paidFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
- (NSString *)freeFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
@property(nonatomic, readonly) NSString *backIssuesListID;
@property(nonatomic, readonly) NSArray *currentIssueIDs;
@property(nonatomic, readonly) BOOL isWhitelisted;
@property(nonatomic, readonly) BOOL supportsNotifications;
@property(nonatomic, readonly) NSString *defaultSectionID;
@property(nonatomic, readonly) NSArray *sectionIDs;
@end

