//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FlightUtilities/FUFlightFactoryInternalProtocol-Protocol.h>

@interface FUFlightFactory : NSObject <FUFlightFactoryInternalProtocol>
{
}

+ (void)loadFlightsWithNumber:(NSUInteger)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
+ (void)loadFlightsWithNumber:(NSUInteger)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(id /* CDUnknownBlockType */)arg7;
+ (void)loadFlightWithIdentifier:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)loadFlightDataWithFlightNumber:(NSUInteger)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
+ (Class)flightFactoryClassWithProvider:(id)arg1;
- (id)parseFlightData:(id)arg1 withError:(id )arg2;

@end

