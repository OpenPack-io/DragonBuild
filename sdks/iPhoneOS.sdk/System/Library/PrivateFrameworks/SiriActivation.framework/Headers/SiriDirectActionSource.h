//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SiriActivationSource.h>

@protocol SiriDirectActionSourceDelegate;

@interface SiriDirectActionSource : SiriActivationSource
{
    id <SiriDirectActionSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriDirectActionSourceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (oneway void)canActivateChangedTo:(id)arg1;
- (void)configureConnection;
- (void)activateWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)activateWithContext:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

