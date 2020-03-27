//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject
{
    IMDoubleLinkedListNode *_first;
    IMDoubleLinkedListNode *_last;
    NSUInteger _count;
}

@property(readonly) NSUInteger count; // @synthesize count=_count;
@property(retain) IMDoubleLinkedListNode *last; // @synthesize last=_last;
@property(retain) IMDoubleLinkedListNode *first; // @synthesize first=_first;
- (BOOL)containsObject:(id)arg1;
- (id)allObjects;
- (void)removeAllObjects;
- (void)removeLinkedListNode:(id)arg1;
- (void)pushLinkedListNode:(id)arg1;
- (void)appendLinkedListNode:(id)arg1;
- (id)popObject;
- (void)pushObject:(id)arg1;
- (void)appendObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

