//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNotebookDescriptor : FATObject
{
    NSString *_guid;
    NSString *_notebookDisplayName;
    NSString *_contactName;
    NSNumber *_hasSharedNotebook;
    NSNumber *_joinedUserCount;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *joinedUserCount; // @synthesize joinedUserCount=_joinedUserCount;
@property(retain, nonatomic) NSNumber *hasSharedNotebook; // @synthesize hasSharedNotebook=_hasSharedNotebook;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) NSString *notebookDisplayName; // @synthesize notebookDisplayName=_notebookDisplayName;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
// - (void).cxx_destruct;

@end

