//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NAFuture;

@protocol HFFavoritable <NSObject>
@property(readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property(readonly, nonatomic) BOOL hf_hasSetFavorite;
@property(readonly, nonatomic) BOOL hf_isFavorite;
- (NAFuture *)hf_updateIsFavorite:(BOOL)arg1;
@end

