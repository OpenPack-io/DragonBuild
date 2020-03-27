//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKMultiplayerViewController.h>

@class GKInvite;
@protocol GKMultiplayerP2PViewControllerDelegate;

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController
{
    BOOL _hosted;
    id <GKMultiplayerP2PViewControllerDelegate> _delegateWeak;
    long long _mode;
    GKInvite *_acceptedInvite;
    double _inviteeConnectionTimeStamp;
}

@property(nonatomic) double inviteeConnectionTimeStamp; // @synthesize inviteeConnectionTimeStamp=_inviteeConnectionTimeStamp;
@property(copy, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic, getter=isHosted) BOOL hosted; // @synthesize hosted=_hosted;
- (void)cancelAlertWithoutDelegateCallback;
- (void)showAutomatchingErrorAlert;
- (void)showInviterDisconnectedAlert;
- (void)processStatusUpdateMessageFromBytes:(const char )arg1 withLength:(unsigned int)arg2;
- (void)sendStatusUpdate;
- (void)playerDisconnected:(id)arg1;
- (void)playerConnected:(id)arg1;
- (void)removedPlayer:(id)arg1;
- (void)cancelPendingInvites;
- (void)invitePlayers:(id)arg1;
- (void)shareFinishedWithContactPlayers:(id)arg1 legacyPlayers:(id)arg2;
- (void)willShare;
- (void)loadShareURLWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)willQueryGKIDs;
- (void)willPresentPlayerPicker:(id)arg1;
- (void)startGame;
- (void)playNow;
- (BOOL)canStartForcedAutomatch;
- (void)applicationWillEnterForeground;
- (void)inviterCancelled;
- (void)setFailedWithError:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setPlayer:(id)arg1 connected:(BOOL)arg2;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setExistingPlayers:(id)arg1;
- (BOOL)havePendingPlayers;
- (BOOL)haveInvitedPlayers;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)configureDataSource;
@property(nonatomic) id <GKMultiplayerP2PViewControllerDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (id)initWithAcceptedInvite:(id)arg1;

@end

