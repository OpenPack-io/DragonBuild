//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, _SFPBImage, _SFPBText;

@protocol _SFPBFormattedText <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int textColor;
@property(nonatomic) BOOL isBold;
@property(nonatomic) BOOL isEmphasized;
@property(retain, nonatomic) _SFPBImage *glyph;
@property(retain, nonatomic) _SFPBText *text;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

