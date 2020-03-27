//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDImager.h>

#import <iWorkImport/TSDConnectedInfoReplacing-Protocol.h>

@class KNAbstractSlide, KNBodyPlaceholderInfo, KNTitlePlaceholderInfo, TSUImage;

__attribute__((visibility("hidden")))
@interface KNImager : TSDImager <TSDConnectedInfoReplacing>
{
    BOOL _shouldShowInstructionalText;
    KNBodyPlaceholderInfo *_replacementBodyPlaceholder;
    KNTitlePlaceholderInfo *_replacementTitlePlaceholder;
    BOOL _shouldTintWhiteImages;
    NSUInteger _slideNumber;
    KNAbstractSlide *_slide;
    double _drawableThumbnailContentInset;
    CGSize _drawableThumbnailSize;
}

@property(nonatomic) BOOL shouldTintWhiteImages; // @synthesize shouldTintWhiteImages=_shouldTintWhiteImages;
@property(nonatomic) double drawableThumbnailContentInset; // @synthesize drawableThumbnailContentInset=_drawableThumbnailContentInset;
@property(nonatomic) CGSize drawableThumbnailSize; // @synthesize drawableThumbnailSize=_drawableThumbnailSize;
@property(nonatomic) BOOL shouldShowInstructionalText; // @synthesize shouldShowInstructionalText=_shouldShowInstructionalText;
@property(retain, nonatomic) KNBodyPlaceholderInfo *replacementBodyPlaceholder; // @synthesize replacementBodyPlaceholder=_replacementBodyPlaceholder;
@property(retain, nonatomic) KNTitlePlaceholderInfo *replacementTitlePlaceholder; // @synthesize replacementTitlePlaceholder=_replacementTitlePlaceholder;
@property(nonatomic) __weak KNAbstractSlide *slide; // @synthesize slide=_slide;
@property(nonatomic) NSUInteger slideNumber; // @synthesize slideNumber=_slideNumber;
// - (void).cxx_destruct;
- (double)p_sizeMultiplierForDrawable:(id)arg1;
- (double)p_strokeWidthForScaleFactor:(double)arg1 drawable:(id)arg2;
- (id)p_strokeForShapeInfo:(id)arg1;
- (BOOL)p_requiresModifiedStrokeForDrawable:(id)arg1 atScaleFactor:(double)arg2;
- (void)p_prepareShapeInfoStroke:(id)arg1 atScaleFactor:(double)arg2 finalRect:(CGRect )arg3;
- (void)p_prepareStyledInfoStyle:(id)arg1;
@property(readonly, nonatomic) TSUImage *drawableThumbnailImage;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (BOOL)isInfoAKeynoteMasterObject:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;

@end

