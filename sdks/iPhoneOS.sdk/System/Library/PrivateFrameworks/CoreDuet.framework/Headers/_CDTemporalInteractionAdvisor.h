//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, _CDInteractionStore;
@protocol OS_dispatch_queue;

@interface _CDTemporalInteractionAdvisor : NSObject
{
    int _settingsNotifyToken;
    _CDInteractionStore *_store;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMutableDictionary *_consumerToModelMap;
}

@property int settingsNotifyToken; // @synthesize settingsNotifyToken=_settingsNotifyToken;
@property(retain, nonatomic) NSMutableDictionary *consumerToModelMap; // @synthesize consumerToModelMap=_consumerToModelMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
@property(retain) _CDInteractionStore *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (id)rankContacts:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)rankerForDate:(id)arg1 settings:(id)arg2;
- (void)updateConsumerModel;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end

