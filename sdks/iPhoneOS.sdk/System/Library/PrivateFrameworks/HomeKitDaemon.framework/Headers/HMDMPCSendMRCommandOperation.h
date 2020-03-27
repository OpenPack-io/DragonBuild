//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class MPCAssistantRemoteControlDestination, MPPlaybackArchive, NSArray, NSDictionary, NSNumber, NSString;
@protocol HMDMPCSendMRCommandOperationExternalObjectInterface;

@interface HMDMPCSendMRCommandOperation : HMFOperation <HMFObject>
{
    MPCAssistantRemoteControlDestination *_destination;
    MPPlaybackArchive *_playbackArchive;
    NSDictionary *_options;
    NSNumber *_mediaRemoteCommand;
    id <HMDMPCSendMRCommandOperationExternalObjectInterface> _externalObjectInterface;
}

+ (id)shortDescription;
@property(retain, nonatomic) id <HMDMPCSendMRCommandOperationExternalObjectInterface> externalObjectInterface; // @synthesize externalObjectInterface=_externalObjectInterface;
@property(readonly, nonatomic) NSNumber *mediaRemoteCommand; // @synthesize mediaRemoteCommand=_mediaRemoteCommand;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) MPPlaybackArchive *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property(readonly, nonatomic) MPCAssistantRemoteControlDestination *destination; // @synthesize destination=_destination;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)main;
- (id)initWithPlaybackArchive:(id)arg1 destination:(id)arg2;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 destination:(id)arg3;

@end

