//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCPersonalizationDecomposedURL : NSObject
{
    NSString *_domain;
    NSArray *_paths;
}

@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
// - (void).cxx_destruct;
- (id)initWithURLString:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

