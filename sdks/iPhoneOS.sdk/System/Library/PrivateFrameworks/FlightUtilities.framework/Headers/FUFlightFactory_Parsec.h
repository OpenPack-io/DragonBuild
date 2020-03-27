//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FlightUtilities/FUFlightFactory.h>

#import <FlightUtilities/FUFlightFactoryInternalProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface FUFlightFactory_Parsec : FUFlightFactory <FUFlightFactoryInternalProtocol>
{
}

+ (id)convertFlightModel:(id)arg1 withError:(id )arg2;
+ (void)extractTimeForFlightStep:(id)arg1 fromLeg:(id)arg2;
+ (id)airportFromSFAirport:(id)arg1;
+ (void)loadFlightStructuresWithFlightNumber:(NSUInteger)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(id /* CDUnknownBlockType */)arg7;
+ (void)loadFlightsWithNumber:(NSUInteger)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(id /* CDUnknownBlockType */)arg7;

@end

