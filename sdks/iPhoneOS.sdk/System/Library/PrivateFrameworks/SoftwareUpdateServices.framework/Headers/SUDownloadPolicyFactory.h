//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUDownloadPolicyFactory : NSObject
{
}

+ (int)downloadPolicyTypeForClass:(id)arg1;
+ (id)downloadPolicyForType:(int)arg1 forDescriptor:(id)arg2;
+ (id)userDownloadPolicyForDescriptor:(id)arg1;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 allowCellularOverride:(BOOL)arg3;
+ (id)userDownloadPolicyForDescriptor:(id)arg1 existingPolicy:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4;
+ (id)_userDownloadPolicyFromCurrentPolicy:(id)arg1 descriptor:(id)arg2 networkMonitor:(id)arg3 allowCellularOverride:(BOOL)arg4;

@end

