//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUConfigurator.h>

@class NSArray;

@interface HUStaticConfigurator : HUConfigurator
{
    NSArray *_staticViewControllers;
}

@property(copy, nonatomic) NSArray *staticViewControllers; // @synthesize staticViewControllers=_staticViewControllers;
// - (void).cxx_destruct;
- (id)_nextViewControllerForResults:(id)arg1;
- (id)initWithConfiguratorDelegate:(id)arg1 contentViewControllers:(id)arg2;
- (id)initWithConfiguratorDelegate:(id)arg1 viewControllers:(id)arg2;

@end

