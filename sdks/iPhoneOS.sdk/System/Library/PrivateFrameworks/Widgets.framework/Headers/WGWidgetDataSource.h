//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Widgets/WGDataSource-Protocol.h>
#import <Widgets/_WGDataSource-Protocol.h>

@class NSArray, NSString, _WGConcreteDataSource;

@interface WGWidgetDataSource : NSObject <_WGDataSource, WGDataSource>
{
    NSString *_dataSourceIdentifier;
    _WGConcreteDataSource *_concreteDataSource;
}

@property(retain, nonatomic, getter=_concreteDataSource, setter=_setConcreteDataSource:) _WGConcreteDataSource *concreteDataSource; // @synthesize concreteDataSource=_concreteDataSource;
@property(readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)removeDatumWithIdentifier:(id)arg1;
- (void)replaceWithDatum:(id)arg1;
- (void)removeWidgetObserver:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addWidgetObserver:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)widgetDatumWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *widgetIdentifiers;
@property(readonly, nonatomic) NSString *parentDataSourceIdentifier;
- (id)initWithIdentifier:(id)arg1;

@end

