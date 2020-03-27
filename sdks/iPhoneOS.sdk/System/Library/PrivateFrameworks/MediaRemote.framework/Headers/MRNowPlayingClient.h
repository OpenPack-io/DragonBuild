//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSArray, NSMutableArray, _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRNowPlayingPlayerProtobuf;

@interface MRNowPlayingClient : NSObject <MRNowPlayingClientState>
{
    _MRNowPlayingPlayerProtobuf *_activePlayer;
    NSMutableArray *_playerClients;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)restoreNowPlayingClientState;
@property(readonly, nonatomic) NSArray *playerClients;
- (void)removePlayer:(id)arg1;
- (id)nowPlayingPlayerClientForPlayerPath:(id)arg1;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *activePlayerPath;
- (BOOL)updateActivePlayerPath:(id)arg1;
- (void)mergeClient:(id)arg1;
@property(retain, nonatomic) _MRNowPlayingClientProtobuf *client;
- (id)initWithPlayerPath:(id)arg1;

@end

