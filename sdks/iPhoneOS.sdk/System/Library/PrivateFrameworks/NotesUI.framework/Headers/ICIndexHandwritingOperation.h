//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSManagedObjectContext, NSManagedObjectID;

@interface ICIndexHandwritingOperation : NSOperation
{
    NSManagedObjectID *_attachmentObjectID;
    NSManagedObjectContext *_context;
}

+ (id)sharedOperationQueue;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSManagedObjectID *attachmentObjectID; // @synthesize attachmentObjectID=_attachmentObjectID;
// - (void).cxx_destruct;
- (void)main;
- (id)initWithAttachmentObjectID:(id)arg1 context:(id)arg2;

@end

