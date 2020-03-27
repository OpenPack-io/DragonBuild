//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKTurnBasedExchangeInternal, GKTurnBasedMatch, GKTurnBasedParticipant, NSArray, NSString;

@interface GKTurnBasedExchange : NSObject
{
    GKTurnBasedParticipant *_sender;
    GKTurnBasedMatch *_matchWeak;
    GKTurnBasedExchangeInternal *_internal;
    NSArray *_replies;
    NSArray *_recipients;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(retain) GKTurnBasedExchangeInternal *internal; // @synthesize internal=_internal;
@property(retain, nonatomic) GKTurnBasedParticipant *sender; // @synthesize sender=_sender;
- (void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_updateInternalFromMatchInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
@property(nonatomic) GKTurnBasedMatch *match; // @synthesize match=_matchWeak;
@property(readonly, nonatomic) BOOL status;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

@end

