//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADFrequencyCap : NSObject
{
    NSString *_identifier;
    NSString *_adMetadata;
    long long _downloadType;
    double _setTime;
}

@property(nonatomic) double setTime; // @synthesize setTime=_setTime;
@property(nonatomic) long long downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) NSString *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)splitCapData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

