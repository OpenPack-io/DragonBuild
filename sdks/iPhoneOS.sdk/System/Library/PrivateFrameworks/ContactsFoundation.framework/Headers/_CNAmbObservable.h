//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

#import <ContactsFoundation/_CNAmbObserverDelegate-Protocol.h>

@class NSArray, NSMapTable;

@interface _CNAmbObservable : CNObservable <_CNAmbObserverDelegate>
{
    NSArray *_observables;
    NSMapTable *_tokensByObserver;
    BOOL _winnerDeclared;
}

// - (void).cxx_destruct;
- (void)cancelRemainingObservables;
- (void)observerWillRelayEvent:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;
- (id)init;

@end

