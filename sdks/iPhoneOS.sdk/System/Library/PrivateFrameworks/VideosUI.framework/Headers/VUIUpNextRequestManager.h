//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VUIUpNextRequestManager : NSObject
{
    NSMutableDictionary *_ongoingCanonicalIDOperationDictionary;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *ongoingCanonicalIDOperationDictionary; // @synthesize ongoingCanonicalIDOperationDictionary=_ongoingCanonicalIDOperationDictionary;
// - (void).cxx_destruct;
- (void)sendRequestForCanonicalID:(id)arg1 action:(NSUInteger)arg2;
- (id)init;
- (id)_init;

@end

