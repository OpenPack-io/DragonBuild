//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecLegacySearchResult.h>

#import <SafariShared/WBSParsecSearchGenericResult-Protocol.h>

@class NSArray, NSNumber, NSString, WBSParsecActionButton, WBSParsecAuxiliaryInfo, WBSParsecImageRepresentation;

@interface WBSParsecSearchGenericResult : WBSParsecLegacySearchResult <WBSParsecSearchGenericResult>
{
    WBSParsecActionButton *_actionButton;
    NSNumber *_titleMaximumLines;
    NSArray *_descriptionRichTexts;
    NSString *_footnote;
    NSString *_secondaryTitle;
    WBSParsecImageRepresentation *_secondaryTitleGlyph;
    WBSParsecAuxiliaryInfo *_auxiliaryInfo;
    WBSParsecImageRepresentation *_thumbnail;
}

+ (id)_specializedSchema;
@property(readonly, nonatomic) WBSParsecImageRepresentation *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo; // @synthesize auxiliaryInfo=_auxiliaryInfo;
@property(readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph; // @synthesize secondaryTitleGlyph=_secondaryTitleGlyph;
@property(readonly, copy, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(readonly, copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(readonly, copy, nonatomic) NSArray *descriptionRichTexts; // @synthesize descriptionRichTexts=_descriptionRichTexts;
@property(readonly, nonatomic) NSNumber *titleMaximumLines; // @synthesize titleMaximumLines=_titleMaximumLines;
- (id)actionButton;
// - (void).cxx_destruct;
- (id)thumbnailWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

