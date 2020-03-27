//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SASBoardServicesConfiguration : NSObject
{
    NSString *_machServiceIdentifier;
    NSString *_presentationDomain;
    NSString *_presentationIdentifier;
    NSString *_signalDomain;
    NSString *_signalIdentifier;
}

+ (id)configuration;
+ (id)new;
@property(retain, nonatomic) NSString *signalIdentifier; // @synthesize signalIdentifier=_signalIdentifier;
@property(retain, nonatomic) NSString *signalDomain; // @synthesize signalDomain=_signalDomain;
@property(retain, nonatomic) NSString *presentationIdentifier; // @synthesize presentationIdentifier=_presentationIdentifier;
@property(retain, nonatomic) NSString *presentationDomain; // @synthesize presentationDomain=_presentationDomain;
@property(retain, nonatomic) NSString *machServiceIdentifier; // @synthesize machServiceIdentifier=_machServiceIdentifier;
// - (void).cxx_destruct;
- (id)identifierForService:(long long)arg1;
- (id)domainForService:(long long)arg1;
- (id)init;
- (id)_init;

@end

