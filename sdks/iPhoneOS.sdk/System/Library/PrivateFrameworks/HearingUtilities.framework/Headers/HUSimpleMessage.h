//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

@interface HUSimpleMessage : NSObject
{
    NSDictionary *_payload;
    NSError *_error;
}

+ (id)messageWithPayload:(id)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithPayload:(id)arg1;

@end

