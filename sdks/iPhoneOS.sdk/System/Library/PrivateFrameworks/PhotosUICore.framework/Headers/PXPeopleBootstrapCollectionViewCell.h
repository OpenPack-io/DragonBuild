//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PXPersonImageRequest, PXRoundedCornerOverlayView, UIImage, UIImageView, UIView;

@interface PXPeopleBootstrapCollectionViewCell : UICollectionViewCell
{
    BOOL _confirmed;
    BOOL _isMergeCandidate;
    BOOL _isVerified;
    NSUInteger _presentationStatus;
    PXPersonImageRequest *_imageRequest;
    PXRoundedCornerOverlayView *_roundCornerOverlay;
    UIView *_selectedCheckmarkView;
    UIView *_unselectedCheckmarkView;
    UIImageView *_badgeView;
    UIImageView *_imageView;
    CGSize _checkmarkImageSize;
}

+ (id)cloudErrorBadgeImage;
@property(readonly, nonatomic) CGSize checkmarkImageSize; // @synthesize checkmarkImageSize=_checkmarkImageSize;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) UIView *unselectedCheckmarkView; // @synthesize unselectedCheckmarkView=_unselectedCheckmarkView;
@property(readonly, nonatomic) UIView *selectedCheckmarkView; // @synthesize selectedCheckmarkView=_selectedCheckmarkView;
@property(readonly, nonatomic) PXRoundedCornerOverlayView *roundCornerOverlay; // @synthesize roundCornerOverlay=_roundCornerOverlay;
@property(nonatomic) BOOL isVerified; // @synthesize isVerified=_isVerified;
@property(nonatomic) BOOL isMergeCandidate; // @synthesize isMergeCandidate=_isMergeCandidate;
@property(retain, nonatomic) PXPersonImageRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property(nonatomic) NSUInteger presentationStatus; // @synthesize presentationStatus=_presentationStatus;
@property(nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
// - (void).cxx_destruct;
- (void)_updateCellSizing;
- (BOOL)_isRTL;
@property(retain, nonatomic) UIImage *image;
- (void)prepareForReuse;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

