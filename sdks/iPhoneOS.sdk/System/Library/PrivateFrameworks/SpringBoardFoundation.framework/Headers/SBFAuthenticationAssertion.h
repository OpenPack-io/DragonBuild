//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSString, SBFUserAuthenticationController;

@interface SBFAuthenticationAssertion : NSObject <BSDescriptionProviding>
{
    BOOL _activated;
    BOOL _invalidated;
    long long _type;
    NSString *_identifier;
    SBFUserAuthenticationController *_controller;
}

@property(readonly, nonatomic) __weak SBFUserAuthenticationController *controller; // @synthesize controller=_controller;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
@property(readonly, nonatomic, getter=isValid) BOOL valid; // @dynamic valid;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)publicDescription;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 withController:(id)arg3;

@end

