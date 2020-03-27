//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@interface GKTournamentPlayerStandingsInternal : GKInternalRepresentation
{
    long long _score;
    long long _topScore;
    long long _friendRank;
    long long _friendCount;
    long long _globalRank;
    long long _globalPlayerCount;
    long long _replayCount;
    long long _participantState;
}

+ (id)secureCodedPropertyKeys;
@property(nonatomic) long long participantState; // @synthesize participantState=_participantState;
@property(nonatomic) long long replayCount; // @synthesize replayCount=_replayCount;
@property(nonatomic) long long globalPlayerCount; // @synthesize globalPlayerCount=_globalPlayerCount;
@property(nonatomic) long long globalRank; // @synthesize globalRank=_globalRank;
@property(nonatomic) long long friendCount; // @synthesize friendCount=_friendCount;
@property(nonatomic) long long friendRank; // @synthesize friendRank=_friendRank;
@property(nonatomic) long long topScore; // @synthesize topScore=_topScore;
@property(nonatomic) long long score; // @synthesize score=_score;

@end

