//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDEventHandlerDelegate-Protocol.h>

@class _CDDataCollectionAnonymizer, _CDFileUtility;

@interface _CDEventHandlerForWatchNearby : NSObject <_CDEventHandlerDelegate>
{
    _CDDataCollectionAnonymizer *_anonymizer;
    _CDFileUtility *_utility;
}

@property(retain, nonatomic) _CDFileUtility *utility; // @synthesize utility=_utility;
@property(retain, nonatomic) _CDDataCollectionAnonymizer *anonymizer; // @synthesize anonymizer=_anonymizer;
// - (void).cxx_destruct;
- (void)eventHandler:(id)arg1 withFileHandle:(id)arg2;
- (id)init;

@end

