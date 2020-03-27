//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BMItemType, NSString;

@interface BMItem : NSObject <NSCopying>
{
    BMItemType *_type;
    NSString *_normalizedValue;
}

+ (id)itemWithType:(id)arg1 UUIDValue:(id)arg2;
+ (id)itemWithType:(id)arg1 numberValue:(id)arg2;
+ (id)itemWithType:(id)arg1 stringValue:(id)arg2;
@property(copy, nonatomic) NSString *normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(retain, nonatomic) BMItemType *type; // @synthesize type=_type;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)uniformIdentifier;
@property(readonly, copy, nonatomic) id value;
- (id)initWithType:(id)arg1 normalizedValue:(id)arg2;
- (id)initWithType:(id)arg1 value:(id)arg2;

@end

