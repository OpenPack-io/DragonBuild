//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSOneTimeCode : NSObject
{
    NSString *_code;
    NSString *_displayCode;
    NSString *_guid;
    NSString *_handle;
    NSDate *_timeStamp;
}

@property(readonly, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, copy, nonatomic) NSString *displayCode; // @synthesize displayCode=_displayCode;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

