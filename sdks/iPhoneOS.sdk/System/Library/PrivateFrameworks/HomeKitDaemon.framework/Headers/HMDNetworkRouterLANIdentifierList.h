//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterLANIdentifierList : NSObject <NSCopying, HMDTLVProtocol>
{
    NSMutableArray *_identifiers;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithIdentifiers:(id)arg1;
- (id)init;

@end

