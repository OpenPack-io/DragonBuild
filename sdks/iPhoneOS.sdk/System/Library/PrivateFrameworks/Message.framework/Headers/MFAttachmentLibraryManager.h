//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFAttachmentComposeManager.h>

@interface MFAttachmentLibraryManager : MFAttachmentComposeManager
{
}

- (id)attachmentsForMessage:(id)arg1 withSchemes:(id)arg2;
- (void)removeProviderForBaseURL:(id)arg1;
- (id)_dataProviderForAttachmentURL:(id)arg1 error:(id )arg2;
- (void)_messageAttachmentStorageLocationsDidChangeNotification:(id)arg1;
- (id)initWithPrimaryLibrary:(id)arg1;

@end

