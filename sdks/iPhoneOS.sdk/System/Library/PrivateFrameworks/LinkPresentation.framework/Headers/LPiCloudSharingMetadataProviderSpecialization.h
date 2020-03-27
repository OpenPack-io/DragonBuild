//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class CKContainer, NSString;

__attribute__((visibility("hidden")))
@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization
{
    NSString *_applicationFromURL;
    NSString *_titleFromURL;
    CKContainer *_baseContainer;
    CKContainer *_applicationContainer;
    BOOL _canceled;
}

+ (id)applicationNameMap;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
+ (id)extractTitleFromURL:(id)arg1;
+ (id)extractApplicationFromURL:(id)arg1;
+ (NSUInteger)specialization;
// - (void).cxx_destruct;
- (void)cancel;
- (void)fail;
- (void)completeUsingApplication:(id)arg1 title:(id)arg2;
- (void)completeWithShareMetadata:(id)arg1 bundleIDs:(id)arg2;
- (void)start;
- (id)iconFromShare:(id)arg1;
- (id)applicationFromBundleIdentifiers:(id)arg1 containerIdentifier:(id)arg2;
- (id)initWithContext:(id)arg1 applicationFromURL:(id)arg2 titleFromURL:(id)arg3;
- (BOOL)canUseCloudKit;
- (id)entitlementForKey:(id)arg1;

@end

