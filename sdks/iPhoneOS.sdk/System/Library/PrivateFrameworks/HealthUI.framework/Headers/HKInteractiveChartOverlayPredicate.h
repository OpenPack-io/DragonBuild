//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

@interface HKInteractiveChartOverlayPredicate : NSObject
{
    NSPredicate *_predicate;
    NSString *_localizedNameKey;
}

@property(readonly, nonatomic) NSString *localizedNameKey; // @synthesize localizedNameKey=_localizedNameKey;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
// - (void).cxx_destruct;
- (id)initWithPredicate:(id)arg1 name:(id)arg2;

@end

