//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDate, NSString;

@interface SASBootstrapSpeechIdMetadata : AceObject <SAAceSerializable>
{
}

+ (id)bootstrapSpeechIdMetadataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)bootstrapSpeechIdMetadata;
@property(copy, nonatomic) NSDate *keychainCreationDate;
@property(copy, nonatomic) NSString *deviceType;
@property(copy, nonatomic) NSString *bootstrapSpeechId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

