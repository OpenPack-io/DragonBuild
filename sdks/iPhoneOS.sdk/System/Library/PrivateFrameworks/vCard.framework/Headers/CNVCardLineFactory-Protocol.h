//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSString;
@protocol CNVCardLine, CNVCardParameterLine;

@protocol CNVCardLineFactory <NSObject>
- (id <CNVCardLine>)versionPlaceholderLine;
- (id <CNVCardLine>)lineWithLiteralValue:(NSData *)arg1;
- (id <CNVCardParameterLine>)dataLineWithName:(NSString *)arg1 value:(NSData *)arg2;
- (id <CNVCardParameterLine>)arrayLineWithName:(NSString *)arg1 value:(NSArray *)arg2 itemSeparator:(NSString *)arg3;
- (id <CNVCardParameterLine>)arrayLineWithName:(NSString *)arg1 value:(NSArray *)arg2;
- (id <CNVCardParameterLine>)stringLineWithName:(NSString *)arg1 value:(NSString *)arg2;
@end

