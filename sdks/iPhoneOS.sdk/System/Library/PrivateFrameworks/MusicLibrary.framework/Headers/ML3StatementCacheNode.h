//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface ML3StatementCacheNode : NSObject
{
    NSObject<NSCopying> *_dictionaryKey;
    ML3StatementCacheNode *_next;
}

@property(retain, nonatomic) ML3StatementCacheNode *next; // @synthesize next=_next;
@property(copy, nonatomic) NSObject<NSCopying> *dictionaryKey; // @synthesize dictionaryKey=_dictionaryKey;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithDictionaryKey:(id)arg1;

@end

