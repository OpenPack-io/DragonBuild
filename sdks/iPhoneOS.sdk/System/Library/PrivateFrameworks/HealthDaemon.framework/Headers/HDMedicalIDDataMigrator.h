//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDMedicalIDDataMigrator : NSObject
{
}

+ (BOOL)_migrateFromVersion3ToVersion4:(id)arg1;
+ (BOOL)_migrateEmergencyContactsToVersion3:(id)arg1;
+ (BOOL)_migrateEmergencyContactsToVersion2:(id)arg1;
+ (BOOL)_migrateFromVersionNoneTo1:(id)arg1;
+ (BOOL)migrateMedicalIDDataIfNeeded:(id)arg1;

@end

