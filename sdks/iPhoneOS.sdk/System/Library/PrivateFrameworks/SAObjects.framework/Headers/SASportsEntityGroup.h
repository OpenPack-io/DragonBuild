//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSString;

@interface SASportsEntityGroup : SASportsEntity
{
}

+ (id)entityGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)entityGroup;
@property(copy, nonatomic) NSString *groupType;
@property(copy, nonatomic) NSArray *entities;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

