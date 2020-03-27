//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSArray, PXSectionedDataSource;
@protocol PXDeferrableDataSourceManagerDelegate;

@interface PXDeferrableDataSourceManager : PXSectionedDataSourceManager <PXSectionedDataSourceManagerObserver>
{
    PXSectionedDataSourceManager *_underlyingDataSourceManager;
    BOOL _hasInitialDataSource;
    BOOL _clientIsHandlingDataSourceTransition;
    PXSectionedDataSource *_pendingDataSource;
    NSArray *_pendingDataSourceChangeDetails;
    id <PXDeferrableDataSourceManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <PXDeferrableDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)resumeDataSourceChanges;
- (void)_setPendingDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (BOOL)_canAttemptDataSourceChanges;
- (id)createInitialDataSource;
- (void)_internal_setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)_finishTransitionToDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;

@end

