//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMAudioDataSource.h>

@class NSSet, NSString;

@interface AXMAudioDataSourceMixer : AXMAudioDataSource
{
    NSString *_name;
    double _panning;
    NSSet *_dataSources;
}

@property(retain, nonatomic) NSSet *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) double panning; // @synthesize panning=_panning;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL isMonoOutput;
- (void)prepareNextSamples:(NSUInteger)arg1;
- (void)removeAllDataSources;
- (void)removeDataSource:(id)arg1;
- (void)addDataSource:(id)arg1;
- (void)setCurrentSampleIndex:(NSUInteger)arg1;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3;

@end

