//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSApplicationProxy.h>

@interface LSApplicationProxy (MCUIMISBlockedApps)
- (BOOL)isBlacklisted;
- (id)appIconForTableCell;
- (BOOL)hasAppVPN;
- (BOOL)isUnableToUseRoamingCellData;
- (BOOL)isUnableToUseCellData;
- (BOOL)isUnableToExportToUnmanaged;
- (BOOL)isUnableToImportFromUnmanaged;
- (BOOL)isExcludedFromCloudSync;
- (BOOL)isExcludedFromBackup;
- (BOOL)isUninstalledOnMDMRemoval;
- (BOOL)hasManagedRestrictions;
@end

