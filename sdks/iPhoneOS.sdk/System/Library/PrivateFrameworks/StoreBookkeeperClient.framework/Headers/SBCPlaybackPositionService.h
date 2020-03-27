//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeperClient/SBCXPCService.h>

#import <StoreBookkeeperClient/SBCPlaybackPositionServiceProtocol-Protocol.h>

@class SBCPlaybackPositionDomain;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol>
{
    BOOL _usingPlaybackPositions;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
}

+ (Class)XPCServiceInterfaceClass;
+ (id)serviceForValueDomain:(id)arg1;
+ (id)serviceForSyncDomain:(id)arg1;
+ (id)_serviceForPlaybackPositionDomain:(id)arg1;
@property(readonly) BOOL usingPlaybackPositions; // @synthesize usingPlaybackPositions=_usingPlaybackPositions;
@property(readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // @synthesize playbackPositionDomain=_playbackPositionDomain;
// - (void).cxx_destruct;
- (oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (oneway void)synchronizeImmediatelyWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
- (oneway void)deletePlaybackPositionEntities;
- (oneway void)deletePlaybackPositionEntity:(id)arg1;
- (oneway void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(BOOL)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)beginAccessingPlaybackPositionEntities;
- (void)validateConnectionConfiguration;
- (void)didConnectToService;
- (id)initWithPlaybackPositionDomain:(id)arg1;

@end

