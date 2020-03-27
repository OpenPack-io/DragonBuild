//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class PHPhotoLibrary;

@interface PXPersonsSectionedDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;
}

@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
// - (void).cxx_destruct;
- (void)reloadData;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (long long)_personTypeForSection:(long long)arg1;
- (id)createInitialDataSource;
- (id)initWithPhotoLibrary:(id)arg1;

@end

