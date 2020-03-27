//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationExtensionCache : NSObject
{
    NSMutableDictionary _extensions;
}

@property(retain, nonatomic) NSMutableDictionary *extensions; // @synthesize extensions=_extensions;
// - (void).cxx_destruct;
- (id)_extensionMatchingSection:(id)arg1 category:(id)arg2;
- (id)_customSectionIdentifiersForExtension:(id)arg1;
- (id)_categoriesForExtension:(id)arg1;
- (NSMutableDictionary )_sectionDictForSection:(id)arg1;
- (void)_removeAllExtensions;
- (void)_addExtension:(id)arg1;
- (void)registerExtensions:(id)arg1;
- (id)extensionForNotificationRequest:(id)arg1;
- (id)init;

@end

