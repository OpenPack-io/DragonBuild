//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActionPerformer.h>

@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer
{
    PXCuratedLibraryViewModel *_viewModel;
    long long _actionZoomLevel;
}

@property(readonly, nonatomic) long long actionZoomLevel; // @synthesize actionZoomLevel=_actionZoomLevel;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
// - (void).cxx_destruct;
- (void)performActionWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)localizedTitleForUseCase:(NSUInteger)arg1;
- (id)initWithActionType:(id)arg1;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;

@end

