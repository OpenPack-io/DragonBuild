//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFResource.h>

#import <WorkflowKit/ICAppInstallStatusObserver-Protocol.h>

@class ICApp, NSObject, NSString, WFiTunesSessionManager;
@protocol OS_dispatch_queue;

@interface WFAppInstalledResource : WFResource <ICAppInstallStatusObserver>
{
    BOOL _skipLookup;
    NSString *_appName;
    WFiTunesSessionManager *_currentAppNameLookupSessionManager;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

+ (BOOL)refreshesAvailabilityOnApplicationResume;
+ (BOOL)mustBeAvailableForDisplay;
@property(nonatomic) BOOL skipLookup; // @synthesize skipLookup=_skipLookup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) WFiTunesSessionManager *currentAppNameLookupSessionManager; // @synthesize currentAppNameLookupSessionManager=_currentAppNameLookupSessionManager;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
// - (void).cxx_destruct;
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(NSUInteger)arg2 userInterface:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)appNotInstalledError;
- (void)refreshAvailability;
- (id)eventDictionary;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
@property(readonly, nonatomic) ICApp *app;
@property(readonly, nonatomic) NSString *appIdentifier;

@end

