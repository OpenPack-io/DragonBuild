//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IXOwnedDataPromise;

@protocol IXCoordinatorWithAppAssetPromise <NSObject>
@property(readonly, nonatomic) BOOL hasAppAssetPromise;
- (BOOL)appAssetPromiseHasBegunFulfillment:(BOOL )arg1 error:(id )arg2;
- (NSUInteger)appAssetPromiseResponsibleClientWithError:(id )arg1;
- (BOOL)setAppAssetPromiseResponsibleClient:(NSUInteger)arg1 error:(id )arg2;
- (IXOwnedDataPromise *)appAssetPromiseWithError:(id )arg1;
- (BOOL)setAppAssetPromise:(IXOwnedDataPromise *)arg1 error:(id )arg2;
@end

