//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BoardServices/BSServiceInterface.h>

@class BSObjCProtocol, NSString;

@interface BSMutableServiceInterface : BSServiceInterface
{
}

+ (id)interfaceWithIdentifier:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) long long clientMessagingExpectation; // @dynamic clientMessagingExpectation;
@property(copy, nonatomic) BSObjCProtocol *client; // @dynamic client;
@property(copy, nonatomic) BSObjCProtocol *server; // @dynamic server;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@end

