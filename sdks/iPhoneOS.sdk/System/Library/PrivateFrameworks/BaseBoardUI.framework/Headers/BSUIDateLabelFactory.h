//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BSUIDateLabelFactory : NSObject
{
    NSMutableDictionary *_recycledLabelsByStyle;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)_purgeRecycledLabels;
- (long long)styleForLabel:(id)arg1;
- (void)recycleLabel:(id)arg1;
- (id)combinedDateLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5;
- (id)endLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5;
- (id)startLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5;
- (id)_labelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 forType:(long long)arg6;
- (void)dealloc;
- (id)init;

@end

