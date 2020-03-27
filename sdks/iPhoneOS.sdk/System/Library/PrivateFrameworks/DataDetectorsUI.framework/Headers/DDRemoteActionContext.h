//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DDRemoteActionContext : NSObject <NSCoding, NSSecureCoding>
{
    NSURL *_URL;
    struct __DDResult _result;
    NSDictionary *_context;
    NSArray *_associatedResults;
    NSString *_hostApplicationIdentifier;
    NSString *_actionClass;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isClassAllowedFromString:(id)arg1;
@property(retain) NSString *actionClass; // @synthesize actionClass=_actionClass;
@property(copy) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property(retain) NSArray *associatedResults; // @synthesize associatedResults=_associatedResults;
@property(retain) NSDictionary *context; // @synthesize context=_context;
@property struct __DDResult result; // @synthesize result=_result;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(struct __DDResult )arg2 context:(id)arg3 associatedResults:(id)arg4 className:(id)arg5;
- (void)dealloc;

@end

