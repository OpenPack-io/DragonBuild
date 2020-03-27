//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DOrderedDictionary : NSObject <NSFastEnumeration>
{
    NSMutableDictionary *mStore;
    NSMutableArray *mKeyOrder;
}

+ (id)dictionaryWithMutableDictionaryStore:(id)arg1;
+ (id)dictionary;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)lastObject;
- (id)lastKey;
@property(readonly, nonatomic) NSUInteger count;
- (id)description;
- (void)dealloc;
- (id)initWithMutableDictionaryStore:(id)arg1;
- (id)init;

@end

