//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionApp.h>

@class NSString, UIImage;

@interface NTKCompanion1stPartyApp : NTKCompanionApp
{
    UIImage *_icon;
    NSUInteger _complicationType;
    NSString *_iconName;
}

+ (BOOL)complicationType:(NSUInteger)arg1 mapsToRemovedSystemAppOnDevice:(id)arg2;
+ (id)companionAppWithAppInfo:(struct _NTKCompanion1stPartyInfo)arg1;
+ (id)_allApps;
+ (id)allAppsForDevice:(id)arg1;
+ (id)appForBundleIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) NSUInteger complicationType; // @synthesize complicationType=_complicationType;
- (void)setIcon:(id)arg1;
// - (void).cxx_destruct;
- (id)icon;
- (id)initWithAppInfo:(struct _NTKCompanion1stPartyInfo)arg1;
- (id)complication;

@end

