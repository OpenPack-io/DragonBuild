//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBProcessSettings;

@protocol SBProcessSettings <NSObject>
- (void)clearProcessSettings;
- (void)applyProcessSettings:(SBProcessSettings *)arg1;
- (SBProcessSettings *)copyProcessSettings;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (BOOL)boolForProcessSetting:(long long)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
@end

