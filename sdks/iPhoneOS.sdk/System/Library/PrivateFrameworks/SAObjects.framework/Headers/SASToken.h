//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable>
{
}

+ (id)tokenWithDictionary:(id)arg1 context:(id)arg2;
+ (id)token;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSNumber *startTime;
@property(copy, nonatomic) NSNumber *silenceStartTime;
@property(nonatomic) BOOL removeSpaceBefore;
@property(nonatomic) BOOL removeSpaceAfter;
@property(copy, nonatomic) NSString *recognitionStability;
@property(copy, nonatomic) NSString *phoneSequence;
@property(copy, nonatomic) NSString *originalText;
@property(copy, nonatomic) NSString *ipaPhoneSequence;
@property(copy, nonatomic) NSNumber *endTime;
@property(copy, nonatomic) NSNumber *confidenceScore;
@property(nonatomic) BOOL addSpaceAfter;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

