//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface OSLogMessagePlaceholder : NSObject
{
    struct os_log_fmt_cspec_s _placeholder;
    NSString *_placeholderString;
    NSArray *_placeholderTokens;
}

- (void)dealloc;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *typeNamespace;
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSString *rawString;
- (id)initWithPlaceholderStruct:(struct os_log_fmt_cspec_s )arg1;
@property(readonly, nonatomic) int precision;
@property(readonly, nonatomic) int width;

@end

