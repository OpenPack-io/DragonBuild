//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@interface PXPhotoKitAssetCollectionFileRadarActionPerformer : PXPhotoKitAssetCollectionActionPerformer
{
}

+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)systemImageNameForAssetCollection:(id)arg1 person:(id)arg2;
+ (id)localizedTitleForUseCase:(NSUInteger)arg1 assetCollection:(id)arg2 person:(id)arg3;
+ (BOOL)canPerformOnAssetCollection:(id)arg1 people:(id)arg2;
- (void)performUserInteractionTask;

@end

