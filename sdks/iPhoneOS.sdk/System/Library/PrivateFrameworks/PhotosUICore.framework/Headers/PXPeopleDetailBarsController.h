//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsBarsController.h>

@class PHPerson, UIButton;

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController
{
    UIButton *_peopleTitleView;
    PHPerson *_person;
}

@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) UIButton *peopleTitleView; // @synthesize peopleTitleView=_peopleTitleView;
// - (void).cxx_destruct;
- (id)createAssetActionManager;
- (id)createTitleView;

@end

