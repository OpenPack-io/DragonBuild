//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject
{
    NSSet *_stringProperties;
}

+ (id)searchSetWithProperties:(id)arg1;
@property(retain, nonatomic) NSSet *stringProperties; // @synthesize stringProperties=_stringProperties;
// - (void).cxx_destruct;
- (BOOL)isEqualToPropertySet:(id)arg1;
@property(readonly, nonatomic) BOOL supportsPropertySearch;
- (BOOL)supportsWellKnownType:(int)arg1;
- (BOOL)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)initWithStringProperties:(id)arg1;
- (id)initWithSearchProperties:(id)arg1;

@end

