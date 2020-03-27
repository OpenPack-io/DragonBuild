//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OCFontSubfamily;

__attribute__((visibility("hidden")))
@interface OCFont : NSObject
{
    BOOL _bold;
    BOOL _italic;
    OCFontSubfamily *_subfamily;
}

+ (id)fontWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3;
@property(nonatomic) BOOL italic; // @synthesize italic=_italic;
@property(nonatomic) BOOL bold; // @synthesize bold=_bold;
@property(readonly, nonatomic) OCFontSubfamily *subfamily; // @synthesize subfamily=_subfamily;
// - (void).cxx_destruct;
- (id)initWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3;

@end

