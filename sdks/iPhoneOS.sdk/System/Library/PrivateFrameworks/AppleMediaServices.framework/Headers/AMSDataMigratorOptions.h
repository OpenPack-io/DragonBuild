//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AMSDataMigratorOptions : NSObject
{
    NSString *_currentBuildVersion;
    NSString *_previousBuildVersion;
    NSUInteger _scenario;
}

+ (id)_stringFromOptionsArray:(id)arg1 atIndex:(NSUInteger)arg2;
@property(nonatomic) NSUInteger scenario; // @synthesize scenario=_scenario;
@property(copy, nonatomic) NSString *previousBuildVersion; // @synthesize previousBuildVersion=_previousBuildVersion;
@property(copy, nonatomic) NSString *currentBuildVersion; // @synthesize currentBuildVersion=_currentBuildVersion;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *optionsArray;
- (id)initWithOptionsArray:(id)arg1;
- (id)init;

@end

