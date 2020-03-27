//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSURL;

@interface PLFileSystemBookmark : PLManagedObject
{
    NSURL *_fileSystemURL;
}

+ (id)fileSystemBookmarkFromURL:(id)arg1 context:(id)arg2;
+ (id)entityName;
// - (void).cxx_destruct;
- (id)fileSystemURL;
- (BOOL)supportsCloudUpload;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

@end

