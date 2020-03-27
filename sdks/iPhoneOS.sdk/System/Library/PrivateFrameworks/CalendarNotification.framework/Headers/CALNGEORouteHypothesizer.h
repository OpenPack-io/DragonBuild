//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNRouteHypothesizer-Protocol.h>

@class CADRouteHypothesis, EKTravelEngineHypothesis, GEORouteHypothesizer;

@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer>
{
    CADRouteHypothesis *currentCADRouteHypothesis;
    GEORouteHypothesizer *_routeHypothesizer;
}

@property(readonly, nonatomic) GEORouteHypothesizer *routeHypothesizer; // @synthesize routeHypothesizer=_routeHypothesizer;
@property(retain, nonatomic) CADRouteHypothesis *currentCADRouteHypothesis; // @synthesize currentCADRouteHypothesis;
// - (void).cxx_destruct;
- (void)didPostUINotification:(NSUInteger)arg1;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)startHypothesizingWithUpdateHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ updateHandler;
@property(readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property(readonly, nonatomic) NSUInteger state;
- (id)initWithRouteHypothesizer:(id)arg1;

@end

