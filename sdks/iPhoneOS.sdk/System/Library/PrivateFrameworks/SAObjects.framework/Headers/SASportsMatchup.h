//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, SALCMLiveTuneInButton, SALCMToggleButton, SASportsEntity, SAUIAppPunchOut;
@protocol SAServerBoundCommand;

@interface SASportsMatchup : SADomainObject
{
}

+ (id)matchupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)matchup;
@property(copy, nonatomic) NSString *winningEntity;
@property(copy, nonatomic) NSArray *tvChannels;
@property(copy, nonatomic) NSString *tournamentSeriesDescription;
@property(retain, nonatomic) SALCMToggleButton *toggleButton;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSNumber *timeTBD;
@property(copy, nonatomic) NSString *timeRemaining;
@property(copy, nonatomic) NSString *status;
@property(copy, nonatomic) NSNumber *statsId;
@property(copy, nonatomic) NSDate *startTime;
@property(retain, nonatomic) SAUIAppPunchOut *punchout;
@property(copy, nonatomic) NSNumber *playoff;
@property(copy, nonatomic) NSArray *playSummaries;
@property(copy, nonatomic) NSString *periodDescription;
@property(copy, nonatomic) NSString *overUnder;
@property(copy, nonatomic) NSString *matchupOrder;
@property(copy, nonatomic) NSString *locationName;
@property(copy, nonatomic) NSString *location;
@property(retain, nonatomic) SALCMLiveTuneInButton *liveTuneInButton;
@property(copy, nonatomic) NSString *line;
@property(nonatomic) BOOL isWatchlistable;
@property(nonatomic) BOOL isOnNow;
@property(copy, nonatomic) NSNumber *isExplicitlyEndOfPeriod;
@property(nonatomic) BOOL isAvailable;
@property(copy, nonatomic) NSString *homeTeamRecordSummary;
@property(copy, nonatomic) NSNumber *homeShootoutPoints;
@property(copy, nonatomic) NSString *homeScore;
@property(copy, nonatomic) NSArray *homeLineScores;
@property(retain, nonatomic) SASportsEntity *homeEntity;
@property(retain, nonatomic) id <SAServerBoundCommand> getModalDetailSnippetCommand;
@property(retain, nonatomic) id <SAServerBoundCommand> getAppsCommand;
@property(copy, nonatomic) NSString *gameType;
@property(copy, nonatomic) NSString *gameSummary;
@property(copy, nonatomic) NSString *favoredEntity;
@property(copy, nonatomic) NSNumber *expectedLineScoreCount;
@property(copy, nonatomic) NSString *currentPeriod;
@property(copy, nonatomic) NSString *awayTeamRecordSummary;
@property(copy, nonatomic) NSNumber *awayShootoutPoints;
@property(copy, nonatomic) NSString *awayScore;
@property(copy, nonatomic) NSArray *awayLineScores;
@property(retain, nonatomic) SASportsEntity *awayEntity;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

