//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDAssetDirectoryContext : NSObject
{
    NSString *_mmcsWorkingDirectory;
    NSString *_assetDbPath;
    NSString *_fileStagingPath;
    NSString *_fileDownloadPath;
}

@property(retain, nonatomic) NSString *fileDownloadPath; // @synthesize fileDownloadPath=_fileDownloadPath;
@property(retain, nonatomic) NSString *fileStagingPath; // @synthesize fileStagingPath=_fileStagingPath;
@property(retain, nonatomic) NSString *assetDbPath; // @synthesize assetDbPath=_assetDbPath;
@property(retain, nonatomic) NSString *mmcsWorkingDirectory; // @synthesize mmcsWorkingDirectory=_mmcsWorkingDirectory;
// - (void).cxx_destruct;

@end

