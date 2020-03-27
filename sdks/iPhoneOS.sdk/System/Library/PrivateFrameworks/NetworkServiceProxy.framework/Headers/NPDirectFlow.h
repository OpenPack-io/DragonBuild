//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSPConnectionInfo;

@interface NPDirectFlow : NSObject
{
    struct nw_protocol _protocol;
    NSNumber *_identifier;
    NSPConnectionInfo *_connectionInfo;
    NSDate *_startDate;
    NSDate *_connectionStartDate;
    NSDate *_firstTxByteTimestamp;
}

+ (void)initializeProtocol;
@property(retain) NSDate *firstTxByteTimestamp; // @synthesize firstTxByteTimestamp=_firstTxByteTimestamp;
@property(retain) NSDate *connectionStartDate; // @synthesize connectionStartDate=_connectionStartDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) NSPConnectionInfo *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
@property(readonly) NSNumber *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)createConnectionInfo;
- (void)handleDetachedFromProtocol;
@property(readonly) struct nw_protocol protocol;
- (id)initWithParameters:(id)arg1;

@end

