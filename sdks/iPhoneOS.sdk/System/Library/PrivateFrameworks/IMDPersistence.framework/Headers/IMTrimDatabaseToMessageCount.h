//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDPersistence/IMAbstractDatabaseTrimmer.h>

@interface IMTrimDatabaseToMessageCount : IMAbstractDatabaseTrimmer
{
    long long _messageCount;
}

@property(readonly, nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
- (void)performMessageSelectionWithOperation:(struct IMDSqlOperation )arg1;
- (id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 messageCount:(long long)arg3;

@end

