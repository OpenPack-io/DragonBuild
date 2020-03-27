//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXHierarchicalContext-Protocol.h>
#import <PhotosUICore/PXMutablePhotosDetailsContext-Protocol.h>
#import <PhotosUICore/PXPhotosDataSourceChangeObserver-Protocol.h>

@class NSDictionary, NSString, PHFetchResult, PXDisplayTitleInfo, PXPhotosDataSource, PXPhotosDetailsViewModel;

@interface PXPhotosDetailsContext : PXObservable <PXMutablePhotosDetailsContext, PXPhotosDataSourceChangeObserver, PXChangeObserver, PXHierarchicalContext>
{
    BOOL _shouldShowMovieHeader;
    BOOL _hasLocation;
    BOOL _shouldUseKeyFace;
    PXPhotosDataSource *_photosDataSource;
    PXDisplayTitleInfo *_displayTitleInfo;
    PXPhotosDetailsContext *_parentContext;
    PHFetchResult *_keyAssetsFetchResult;
    NSUInteger _viewSourceOrigin;
    PXPhotosDetailsViewModel *_viewModel;
    NSUInteger _contextHierarchyDepth;
    PHFetchResult *_assetCollections;
    NSDictionary *_assetsByCollection;
    PHFetchResult *_people;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    NSString *_titleFontName;
}

+ (id)photosDetailsContextForAsset:(id)arg1 parentContext:(id)arg2;
+ (id)photosDetailsContextForMemory:(id)arg1 enableCuration:(BOOL)arg2 enableKeyAssets:(BOOL)arg3;
+ (id)photosDetailsContextForMemory:(id)arg1;
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 keyAssets:(id)arg3 enableCuration:(BOOL)arg4 enableKeyAssets:(BOOL)arg5 useVerboseSmartDescription:(BOOL)arg6 viewSourceOrigin:(NSUInteger)arg7;
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 viewSourceOrigin:(NSUInteger)arg3;
@property(readonly, nonatomic) BOOL shouldUseKeyFace; // @synthesize shouldUseKeyFace=_shouldUseKeyFace;
@property(readonly, nonatomic) BOOL hasLocation; // @synthesize hasLocation=_hasLocation;
@property(readonly, nonatomic) BOOL shouldShowMovieHeader; // @synthesize shouldShowMovieHeader=_shouldShowMovieHeader;
@property(readonly, copy, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property(readonly, copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property(readonly, copy, nonatomic) NSDictionary *assetsByCollection; // @synthesize assetsByCollection=_assetsByCollection;
@property(readonly, nonatomic) PHFetchResult *assetCollections; // @synthesize assetCollections=_assetCollections;
@property(readonly, nonatomic) NSUInteger contextHierarchyDepth; // @synthesize contextHierarchyDepth=_contextHierarchyDepth;
@property(readonly, nonatomic) PXPhotosDetailsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) NSUInteger viewSourceOrigin; // @synthesize viewSourceOrigin=_viewSourceOrigin;
@property(readonly, nonatomic) PHFetchResult *keyAssetsFetchResult; // @synthesize keyAssetsFetchResult=_keyAssetsFetchResult;
@property(readonly, nonatomic) __weak PXPhotosDetailsContext *parentContext; // @synthesize parentContext=_parentContext;
@property(readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // @synthesize displayTitleInfo=_displayTitleInfo;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (id)mutableChangeObject;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) BOOL shouldShowHeaderTitle;
- (void)_updatePropertiesDerivedFromDisplayTitleInfo;
- (void)_updatePropertiesDerivedFromPhotosDataSource;
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;
- (id)init;

@end

