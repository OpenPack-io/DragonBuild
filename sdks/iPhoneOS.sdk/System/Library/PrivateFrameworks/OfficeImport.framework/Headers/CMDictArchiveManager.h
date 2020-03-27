//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMStylingArchiveManager.h>

@class NSMutableDictionary, NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface CMDictArchiveManager : CMStylingArchiveManager
{
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;
    BOOL mIsFrameset;
}

// - (void).cxx_destruct;
- (void)pushCssToPath:(id)arg1;
- (id)resourceUrlProtocol;
- (NSUInteger)resourceCount;
- (id)copyDictionaryWithSizeInfos:(BOOL)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)copyResourceWithName:(id)arg1 type:(int)arg2;
- (id)name;
- (void)setIsFrameset;
- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;

@end

